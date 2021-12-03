#pragma once

#include <iostream>

class Singleton {

public:

	static Singleton* getInstance()
	{
		if (m_instance == nullptr)
		{
			m_instance = new Singleton();
		}

		return m_instance;
	}

	void doSomething()
	{
		std::cout << "Something\n";
	}

protected:
	Singleton()
	{
		std::cout << "created new obj \n";
	}
private:
	static Singleton* m_instance;
};

Singleton* Singleton::m_instance = nullptr;
