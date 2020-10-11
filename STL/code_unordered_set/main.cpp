#include <iostream>
#include <string>
#include <unordered_set>

class Cat
{
public:
	Cat(int age, std::string name):mAge{age},mName{name} {}
	void speak() const
	{
		std::cout << mAge << " " << mName << std::endl;
	}
	int age() const
	{
		return mAge;
	}
	const std::string& name() const
	{
		return mName;
	}

private:
	int mAge;
	std::string mName;
};

//Cat hash
struct CatHash
{
    std::size_t operator()(Cat const& c) const noexcept
    {
        std::size_t h1 = std::hash<int>{}(c.age());
        std::size_t h2 = std::hash<std::string>{}(c.name());
        return h1 ^ h2; 
    }
};
namespace std
{
    template<> 
    struct hash<Cat>
    {
        std::size_t operator()(Cat const& c) const noexcept
	    {
	        std::size_t h1 = std::hash<int>{}(c.age());
	        std::size_t h2 = std::hash<std::string>{}(c.name());
	        return h1 ^ h2; 
	    }
    };
}


bool operator==(const Cat & lhs, const Cat& rhs) noexcept
{
	return (lhs.age()==rhs.age() && lhs.name() == rhs.name());
};

int main()
{
	Cat kitty{1,"kitty"};
	Cat nabi{2, "nabi"};


	std::unordered_multiset<Cat> cats;
	cats.emplace(kitty);
	cats.emplace(nabi);
	cats.emplace(1,"kitty");
	cats.emplace(2,"nabi");

	for(const auto& cat:cats)
	{
		cat.speak();
	}



	return 0;
}