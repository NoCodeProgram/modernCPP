#include <iostream>
class Cat
{
public:	
	Cat():mAge(1){};
	Cat(int age):mAge(age){};
private:
	int mAge;

};
class Zoo
{
public:
	Zoo(int kittyAge):mKitty(Cat(kittyAge))
	{};
private:
	Cat mKitty;
};


int main()
{
	Zoo cppZoo(5);
	return 0;
}