
int foo(double a); 
double bar(int a);

int main()
{
	int a = 100;
	double b = bar(a);
	int c = foo(b);

	return 0;
}