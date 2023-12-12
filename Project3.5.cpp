#include<iostream>
void monky(int a, int b = 1)
{
	int y = (b + 1) * 2;
	if (a == 1)
	{

		std::cout << y;
	}
	else monky(a - 1, y);
}


int main()
{
	int a = 10;
	std::cout << "猴子的桃子数量为:";
	monky(a);

}
