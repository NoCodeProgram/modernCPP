#include <iostream>
#include <thread>
#include <vector>
void fn(int a, ref())
{
	std::cout << std::this_thread::get_id() << std::endl;
}


int main()
{
	std::vector<std::thread> threads;
	for(int i=0 ; i<10 ; i++)
	{
		threads.emplace_back(std::thread(fn));
	}

	for(auto & thread : threads)
	{
		thread.join();
	}
}