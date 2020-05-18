#include <iostream>
class Animal
{
public:
	virtual void speak();
	virtual ~ Animal() = default;
private:
	double animalData;
};

class Lion : virtual public Animal
{
public:
	virtual void speak();

private:
	double LionData;
};

int main()
{
	// Lion * lionPtr = new Lion();
	// lionPtr->speak();
	// delete lionPtr;


	Animal * polyAnimal = new Lion();
	polyAnimal->speak();
	delete polyAnimal;
	return 0;
}