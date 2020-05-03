#include <iostream>
class Cat
{
public:
	void speak()
	{
		static int count = 0;
		count++;
		std::cout << count <<"meow" << std::endl;
	};
	
private:
	int mAge;
};



int main()
{
	Cat kitty;
	Cat nabi;
	kitty.speak();
	nabi.speak();
	
	return 0;
}