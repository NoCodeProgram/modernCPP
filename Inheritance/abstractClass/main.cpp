#include <iostream>

class Animal
{
public:
	virtual void speak()=0;
	virtual ~Animal()=default;
private:
	double height;	// 8bytes
};

class Cat : public Animal
{
public:
	// void speak() override
	// {
	// 	std::cout << "meow~" << std::endl;
	// }
private:
	double weight;	// 16bytes
};

int main()
{
	Animal * polyAnimal = new Cat();
	polyAnimal->speak();
	delete polyAnimal;


	return 0;
}