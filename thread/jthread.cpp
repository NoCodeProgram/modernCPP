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

//more preciesly, jthread work with stop_token
//the function to be called must have std::stop_token as an argument
//it must use for its process logic to stop immediately when the signal is on.

//compiler may need to be updated
//check with C++20 