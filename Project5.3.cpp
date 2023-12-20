#include<iostream>
class cuboid
{
private:
	int length, width, height, V;
public:
	void cin_data()
	{
		std::cin >> length >> width >> height;
	}
	void count()
	{
		V = length * width * height;
	}
	void print_V()
	{
		std::cout << V << std::endl;
	}
};

int main()
{
	cuboid c1, c2, c3;

	c1.cin_data();
	c1.count();
	c1.print_V();

	c2.cin_data();
	c2.count();
	c2.print_V();

	c3.cin_data();
	c3.count();
	c3.print_V();

	return 0;
}