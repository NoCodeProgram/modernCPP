#include <iostream>
#include <functional>
#include <vector>
class FunctionObj
{
public:
	void operator() (int i)
	{
		std::cout << "functionObj" << i << std::endl;
	}
};

void freeFunction(int i)
{
	std::cout << "freeFunction" << i << std::endl;
};

void runFunction(int i,const std::function<void(int)>& fn)
{
	fn(i);
};

void runFunctions(const std::vector<std::function<void(int)>>& functions)
{
	int i=0;
	for(const auto & fn : functions)
	{
		fn(++i);
	}
};

int main()
{

	void (* fnPtr)(int);
	fnPtr = freeFunction;

	FunctionObj functionObj;
	auto lambdaFn = [](int i)
	{
		std::cout << "lambdaFunction" << i << std::endl;
	};

	std::vector<std::function<void(int)>> functions;
	functions.emplace_back(freeFunction);
	functions.emplace_back(functionObj);
	functions.emplace_back(lambdaFn);
	runFunctions(functions);

	return 0;
}