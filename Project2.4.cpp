#include<iostream>
int main()
{
	int x, y;
	char ch;
	std::cout << "该程序可以实现（+ - * / %）运算，请输入两个数" << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;
	std::cout << "请输入你想要的运算：" << std::endl;
	std::cin >> ch;

	switch (ch)
	{
		case '+': 
			std::cout<<x + y;
			break;
		case '-': 

			std::cout << x - y;
			break;
		case '*':
			std::cout << x * y;
			break;
		case '/':
			if (y == 0)
			{
				std::cout << "除数为0，运算非法";
			}
			else
			{
				std::cout << x / y;
			}
			break;
		case '%':			
			if (y == 0)
		{
			std::cout << "除数为0，运算非法";
		}
				else
		{
				std::cout << x % y;
		}
			break;
		default:
			std::cout << "运算符非法";
	}
}