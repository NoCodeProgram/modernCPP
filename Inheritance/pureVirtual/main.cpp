
class Animal
{
public:
	virtual void speak()=0;
	virtual void walk()
	{
		/////////
	};
private:
	int legCount;
	int noseLocation;
	int mouthLocation;
};

class Dolphin: public Animal
{
	void walk() override
	{
		"we swim";
	}

}

class Cat : public Animal
{
	void speak() override
	{
		std::cout << "meow" << std::endl;
	}
	Cat()
	{
		legCount = 4;
		noseLocation = center(face);
	}
}


int main()
{
	Cat kitty;

	return 0;
}