#include <iostream>
#include <thread>
#include <chrono>


void plus1(int& num)
{
	for(int i=0 ; i<10000 ; i++)
	{		
		num = num+1;
	}	
}

int main()
{
	int num = 0;

	std::thread t0(plus1,std::ref(num));
	std::thread t1(plus1,std::ref(num));

	//join is must
	t0.join();
	t1.join();


	
	std::cout << "num: " << num << std::endl;

}
//race condition, data race,
//here num is shared between two threads