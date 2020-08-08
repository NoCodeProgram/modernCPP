template <typename T>
T foo(T a)
{
    return a*2;
}

template int foo<int>(int); //explicit template instantiation
template double foo<double>(double);