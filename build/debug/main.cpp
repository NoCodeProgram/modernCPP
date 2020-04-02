#include <iostream>
#include <vector>

int add(std::vector<int>& vIn)
{
	for(int & el : vIn)
	{
		++el;
	}
	return 0;
}
int sub(std::vector<int>& vIn)
{
	for(int & el : vIn)
	{
		--el;
	}
	return 1;
}
int main()
{
	std::vector<int> v{1,2,3,4,5};
	int a=10;
	if(a%2==0)
	{
		a = add(v);
	}
	else
	{
		a = sub(v);
	}
	std::cout << a << std::endl;
	return 0;
}