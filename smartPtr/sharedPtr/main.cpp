#include <iostream>
#include <memory>
class Cat
{
public:
	Cat()
	{
		std::cout << "cat constructor" << std::endl;
	}
	~Cat()
	{
		std::cout << "cat destructor" << std::endl;
	}

	std::shared_ptr<Cat> mFriend;
};

int main()
{
	std::shared_ptr<Cat> pKitty = std::make_shared<Cat>();
	std::shared_ptr<Cat> pNabi = std::make_shared<Cat>();

	pKitty->mFriend = pNabi;
	pNabi->mFriend = pKitty;



	return 0;

}
