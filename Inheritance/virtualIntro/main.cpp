#include <array>
#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "Animal" << std::endl;
	}
	virtual ~Animal()=default;
};

class Cat : public Animal
{
public:
	void speak() override 
	{
		std::cout << "meow~" << std::endl;
	}
};

class Dog : public Animal
{
public:
	void speak() override 
	{
		std::cout << "bark!" << std::endl;
	}
};

int main()
{
	//smartPtr
	std::array<Animal*,5> animals;

	for(auto & animalPtr : animals)
	{
		int i=0;
		std::cin >> i;
		if(i==1)
		{
			animalPtr = new Cat();
		}
		else
		{
			animalPtr = new Dog();
		}
	}
	for(auto & animalPtr : animals)
	{
		animalPtr->speak();
		delete animalPtr;
	}
}