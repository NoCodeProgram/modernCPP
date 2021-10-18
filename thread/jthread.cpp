#include <iostream>
#include <thread>

void function()
{
	std::cout << "thread:"<< std::endl;

}

int main()
{
	std::cout <<"hardware conc" << std::thread::hardware_concurrency() << std::endl;
	std::cout << "main thread start" << std::endl;


	std::thread t1(function);
	std::cout << "main thread:" << std::this_thread::get_id()<< std::endl;
	t1.join(); //join , detach are must

	std::jthread j1(function);


	std::cout << "main thread finish" << std::endl;

}
//jthread 
//automatically, joins on its destructor

//compiler may need to be updated
//check with C++20 