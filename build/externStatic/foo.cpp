#include "foo.h"
int foo(double a)
{
	return static_cast<int>(a);
}
double bar(int a)
{
	return static_cast<double>(a);
}
