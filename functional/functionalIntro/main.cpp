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
	Plus plus3{3};
	Plus plus5{5};

	std::cout << plus3(10) << std::endl;
	std::cout << plus5(10) << std::endl;
	return 0;

}