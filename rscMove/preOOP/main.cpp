#include <vector>
int main()
{
	std::vector<int> vec;
	int a1=1;
	int a2=2;

	vec.push_back(a1);
	vec.push_back(a2);



	return 0;
}




void fooV(std::array<int,100> a)
{
	int b = a+1;
};

void fooP(int * ap)
{
	int b = *ap+1;
};

void fooR(const int & a)
{
	int b = a+1;
	a =100;
};
