#include <iostream>
#include "ObservablePattern.h"
int main()
{

	Subject<std::string> publisher;

	Observer<std::string> subcribe_1(&publisher);
	Observer< std::string > subcribe_2(&publisher);
	Observer<std::string> subcribe_3(&publisher);

	publisher.attach(&subcribe_1);
	publisher.attach(&subcribe_2);
	publisher.attach(&subcribe_3);

	publisher.setMessage("selam");

	publisher.notify();

}