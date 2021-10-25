//short intro, and promise,future followed, and explain std::async again???
//chapter name can be future/promise?? or async 

//first, do call computationally expensive function using thread
//second, replace it with async 
// why is it better?, no need to join, (more work like memory managment)
// how it works?

//std::async is a helper function to know what itis, we need to understand promise
//it should use threadpool of std library. but it has not implemented yet.

//safer than explicit thread (shared variable for return value, even for lambda approach)
int ret
std::thread t([&ret]{ res = 100 });
//it must wait until join.
//but developers can make a mistake

//data channel? throw promise?

//how about exception?
//discuss exception with all the lectues in this chapter(promise,packkagedtask,async,future,)

//similar to javascript async function

//std::async is a function
//it returns future object, future can get result using future.get()

#include <iostream>
#include <thread>
#include <chrono>
#include <future>


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
	auto fut = std::async() //we can call function // or lambda
	int ret = fut.get()  // block main thread here. but when the function initated?

	//join is must
	t0.join();
	t1.join();


	
	std::cout << "num: " << num << std::endl;

}
//Data channel creation?
