#include <iostream>
#include <memory>

//Cat has Shared Ptr member variable
class Cat
{
public:
	explicit Cat(int n):mVar{std::make_shared<int>(n)}
	{
		std::cout << "cat constructor" << std::endl;
	}
	~Cat() noexcept
	{
		std::cout << "cat destructor" << std::endl;
	}
	Cat clone() const	//create deep copied object
	{
		Cat tmp{*mVar};
		return tmp;
	}
private:
	std::shared_ptr<int> mVar;
};


int main()
{
	const Cat kitty{2};
	const Cat nabi{kitty.clone()};
	

	return 0;
}
