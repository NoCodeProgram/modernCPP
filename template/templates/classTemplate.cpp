#include <iostream>
#include <string>
#include <vector>

template<typename T>
class Stack
{
public:
	void push(T elem)
	{
		mVec.emplace_back(std::move(elem));
	}
	bool pop(T& elem)
	{
		if(mVec.size()==0)
		{
			return false;
		}
		elem = mVec[mVec.size()-1];
		mVec.pop_back();
		return true;
	}
private:
	std::vector<T> mVec;
};

int main()
{
	Stack<std::string> stack;

	stack.push("abc");
	stack.push("def");
	stack.push("nocope");

	std::string n;
	while(stack.pop(n))
	{
		std::cout << n << std::endl;
	}

	return 0;
}

