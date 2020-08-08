#pragma once
template<typename T>
T foo(T a)
{
	return a+a;
};
template double foo(double);

inline int k()
{
	return 1;
};


double bar();
