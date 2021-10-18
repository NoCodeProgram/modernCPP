#include <iostream>
#include <chrono>
#include <thread>

void function()
{
	std::cout << "functionThread"<<  std::endl;
	// while(1)
	// {
	// 	std::this_thread::sleep_for (std::chrono::seconds(2));
	// 	std::cout << "functionThread finish"<<  std::endl;
	// }
}

int main()
{
	std::cout << "main thread start" << std::endl;


	std::thread t1(function);
	std::cout << "main thread:" << std::endl;
	

	

	// t1.detach(); //throw std::terminate
	//thread is an object.
	//it has a consturctor
	//it has a destructor
	//it calles std::terminate()
	//so it must be joined / or 
	// t1.join();
	//t1.join() //multiple time, throw system error
	
	std::cout << "main thread finish" << std::endl;

}
//order changes
//the definition of joinable thread., https://en.cppreference.com/w/cpp/thread/thread/joinable
//thread must be joined or detached.
//detach -> stay forever?
//detach.. wait for a long time

//also undefined behavior without detached/join. don't do it.
