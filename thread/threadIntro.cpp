#include <iostream>
#include <thread>

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
//very simple thread
//you will not be writing simple thread like this.
//but for learning, we should do it.

//order changes
//each thread has its own id. but just show and remove it.

//TODO: may add thread number for each function