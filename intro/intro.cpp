#include <iostream>

int foo(int arg)
{
	return arg+1;
};

class AAA
{
public:
	void foo()
	{
		std::cout << "AAA::foo()" <<std::endl;
	};
private:
	int memberVar;
};

int main()
{
	AAA a;
	a.foo();

	int d = foo(10);
	double b = 3.3;


	if(d==11)
	{
		std::cout << "d is 11" << std::endl;
	}
	for (int i=0 ; i<10 ; i++)
	{

	}

	return 0;
}