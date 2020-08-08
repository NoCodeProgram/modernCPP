#include <iostream>
#include <string>
template<typename T>
void printVar(T&& a)  // forward reference (universal reference)
{
	std::string localVar{std::forward<T>(a)};
	std::cout << localVar << std::endl;
};



int main()
{

	std::string a = "nocope";
	printVar(a);
	// T = string&, (string& )


    printVar(std::move(a));
    // T = string, (string &&)

    std::cout << a << std::endl;

	return 0;
}