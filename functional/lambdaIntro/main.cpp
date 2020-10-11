#include <iostream>

class Plus
{
public:
	explicit Plus(int a): localVar{a} {}
	int operator() (int x) const
	{
		return localVar + x;
	}
private:
	int localVar;
};

int main()
{
	int three{3};
	auto lambdaPlus3 = [three](int x)
	{
		return localVar + three;
	};

	Plus plus3{3};

	std::cout << plus3(10) << std::endl;
	std::cout << lambdaPlus3(10) << std::endl;
	return 0;

}