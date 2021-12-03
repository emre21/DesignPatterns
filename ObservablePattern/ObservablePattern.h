
#pragma once

#include <string>
#include <list>
#include <iterator>
#include <any>
#include <iostream>

class IObserver
{
public:
	virtual void update() = 0;
};


class ISubject {
public:
	virtual void attach(IObserver* observer) = 0;
	virtual void detach(IObserver* observer) = 0;
	virtual void notify() = 0;
};

template <typename T>
class Subject : public ISubject
{
public:
	Subject()
	{}
	~Subject(){}


	void setMessage(T message)
	{
		m_message = message;
	}
	T getMessage()
	{
		return m_message;
	}


	void attach(IObserver* observer) override
	{
		m_observer_list.push_back(observer);
	}
	void detach(IObserver* observer) override
	{
		m_observer_list.remove(observer);
	}
	void notify() override
	{
		std::list<IObserver*>::iterator it;
		
		for (it = m_observer_list.begin(); it != m_observer_list.end(); it++)
		{
			(*it)->update();
		}
	}

private:
	T m_message;
	std::list<IObserver*> m_observer_list;
};


template <typename T>
class Observer : public IObserver
{
public:
	Observer(Subject<T>* subject)
	{
		m_ptr_subject = subject;
	}
	~Observer(){}

	void update() override
	{
		std::cout<<"from " << m_ptr_subject <<"-> " << this <<" message : " << m_ptr_subject->getMessage() << '\n';
	}
private:
	Subject<T>* m_ptr_subject;
};
