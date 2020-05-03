class Cat
{
public:
	void speak(int name);
	void speak(float weight);
private:
	int mAge;
};

int main()
{
	Cat kitty;
	kitty.speak();
	Cat nabi;
	nabi.speak();
}