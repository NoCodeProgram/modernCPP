#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "Animal" << std::endl;
	}
	virtual ~Animal()=default;
private:
	double height;	// 8bytes
};

class Cat : public Animal
{
public:
	void speak() override
	{
		std::cout << "meow~" << std::endl;
	}
private:
	double weight;	// 16bytes
};

int main()
{
	Animal * polyAnimal = new Animal();
	polyAnimal->speak();
	delete polyAnimal;


	return 0;
}