#include <iostream>
class Cat
{
public:
	void printCat();
private:
	int age;
	int weight;
};
int main()
{
	Cat cat1;
	Cat cat2;

	Cat * catPtr = &cat1;
	std::cout << sizeof(catPtr) << std::endl;
	
	return 0;	
}