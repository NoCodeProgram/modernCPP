#include <iostream>
#include <memory>
class Cat : public Animal
{
public:
	Cat():mAge{0}
	{
		std::cout << "cat constructor" << std::endl;
	}
	~Cat()
	{
		std::cout << "cat destructor" << std::endl;
	}

private:
	int mAge;
};

class Dog : public Animal
{};

class Zoo
{
public:
	//prefer enum class
	Zoo(int n)
	{
		if(n==1)
		{
			mAnimal = make_unique<Cat>()
		}
		else
		{
			mAnimal = make_unique<Dog>()
		}
	}

private:
	std::unique_ptr<Animal> mAnimal;

};

int main()
{
	// Cat * catPtr = new Cat();
	// Cat * catPtr1 = catPtr;

	std::unique_ptr<Cat> catPtr = std::make_unique<Cat>();
	std::unique_ptr<Cat> catPtr1 = std::move(catPtr);
	
	// foo(catPtr);
	// delete catPtr;



	return 0;
}