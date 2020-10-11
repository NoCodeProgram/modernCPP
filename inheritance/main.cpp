class Base
{
private:
	int pri;
protected:
	int pro;

public: //protected from Derived class
	void setPRI(int n)
	{
		pri = n;
	}
	void setPRO(int n)
	{
		pro = n;
	}
};

class Derived : private Base
{
public:
	void test()
	{
		Base::pro = 100;
	}

};

int main(int argc, char const *argv[])
{
	Derived derived;
	derived.setPRO(10);
	derived.setPRI(100);

	
	return 0;
}