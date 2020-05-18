#include <iostream>

class Animal
{
public:
	virtual void speak()
	{
		std::cout << "animal" << std::endl;
	}
	virtual ~Animal() = default;
private:
	double animalData;
};

class Cat : public Animal
{
public:
	void speak() override
	{
		std::cout << "meow~" << std::endl;
	}
	void knead()
	{
		std::cout << "kkuk kkuk" << std::endl;
	}
private:
	double catData;
};

class Dog : public Animal
{
public:
	void speak() override
	{
		std::cout << "bark!" << std::endl;
	}
	void wagTail()
	{
		std::cout << "wagging" << std::endl;
	}
private:
	double dogData;
};

int main()
{
	// std::cout << typeid(Animal).hash_code() << std::endl;
	// std::cout << typeid(Cat).hash_code() << std::endl;
	// std::cout << typeid(Dog).hash_code() << std::endl;

	Animal * animalPtr = new Animal();

	Cat * catPtr = dynamic_cast<Cat*>(animalPtr);
	if(catPtr == nullptr)
	{
		std::cout << "This is not a Cat object" << std::endl;
		return 0;
	}
	catPtr -> speak();
	catPtr -> knead();
	delete catPtr;

	return 0;

}