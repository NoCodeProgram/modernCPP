#include "foo.h"

template<typename T>
T foo(T a)
{
	return a+a;
};
template double foo(double);


double bar()
{
	return k();
};