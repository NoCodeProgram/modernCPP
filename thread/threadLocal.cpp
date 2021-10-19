#include <iostream>
#include <chrono>
#include <thread>
#include <functional>


thread_local std::string s("hello from ");
//local thread is bound to the thread
// you can print the memory location of s

//here the question comes
//static, a thread_local, and a local variable
// thread_local vs local variable
// what are the advantages? disadvanttages??

//argument
void function(int a, int &b)
{
	std::cout << "functionThread:"<<  std::endl;
	a =100;
	b = 100;
	std::cout << a << "  " << b << std::endl;

}

int main()
{
	std::cout << "main thread start" << std::endl;
	int a = 0;
	int b = 3;


	std::thread t1(function,a,std::ref(b));  //when we pass by ref, we need to add it
	std::cout << "main thread:" << std::endl;
	t1.join();

	std::cout << a << "  " << b << std::endl;

	std::cout << "main thread finish" << std::endl;

}

//memory map should be explained too.

//we can pass one arg
//we can pass multiple args

//think about life time of the args(reference).
// to explain life time of the arg object, consider string
// reference, or objects bound to creator's




