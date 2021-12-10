#include <iostream>
#include <thread>
//Any return value from the function is ignored. If the function throws an exception, std::terminate is called. In order to pass return values or exceptions back to the calling thread, std::promise or std::async may be used.
void function()
{
	std::cout << "thread:"<<std::this_thread::get_id() << std::endl;

}

int main()
{
	std::cout << "main thread start" << std::endl;

    std::thread t2([]{
		std::cout << "lambda thread:"<< std::this_thread::get_id() << std::endl;
	});
	std::thread t1(function);
	std::cout << "main thread:" << std::this_thread::get_id()<< std::endl;
	

	
	//join is must
	t1.join();
	t2.join();

	std::cout << "main thread finish" << std::endl;

}



//TODO: may add thread number for each function
//life time is must be considered

// Hot to get function return from thread????
// What happens when exception thrown??? terminate!

