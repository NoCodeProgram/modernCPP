#include <iostream>

int ga=0;

int main()
{
	int sa=0;
	std::cout << "&sa : " << (long)&sa << std::endl;

	int * hap = new int;
	std::cout << "&ha : " << (long)hap << std::endl;

	//Prefer Smart pointer.
	delete hap;
	std::cout << "&ga : " << (long)&ga << std::endl;

	

	return 0;

}