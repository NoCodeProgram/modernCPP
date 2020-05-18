#include <iostream>
class Animal
{
public:
	Animal(){
		std::cout << "Animal constructor" << std::endl;
	}
	virtual void speak()
	{
		std::cout << "Animal!" << std::endl;
	}
	virtual ~Animal(){
		std::cout << "Animal destructor" << std::endl;
	}
private:
	double animalData;
};

class Lion : virtual public Animal
{
public:
	Lion(){
		std::cout << "Lion constructor" << std::endl;
	}
	virtual void speak()
	{
		std::cout << "Lion!" << std::endl;
	}
	virtual ~Lion(){
		std::cout << "Lion destructor" << std::endl;
	}
private:
	double lionData;
};
class Tiger : virtual public Animal
{
public:
	Tiger(){
		std::cout << "Tiger constructor" << std::endl;
	}
	virtual void speak()
	{
		std::cout << "Tiger!" << std::endl;
	}
	virtual ~Tiger(){
		std::cout << "Tiger destructor" << std::endl;
	}
private:
	double tigerData;
};
class Liger : public Lion, public Tiger
{
public:
	Liger(){
		std::cout << "Liger constructor" << std::endl;
	}
	void speak() override
	{
		std::cout << "Liger!" << std::endl;
	}
	~Liger(){
		std::cout << "Liger destructor" << std::endl;
	}	
private:
	double ligerData;
};

int main()
{
	Liger liger;
	liger.speak();
	return 0;
}