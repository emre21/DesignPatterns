
#include "Singleton.hpp"



int main()
{
	Singleton* s = Singleton::getInstance();
	s->doSomething();
	Singleton::getInstance()->doSomething();
}