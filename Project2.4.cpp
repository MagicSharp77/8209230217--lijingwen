#include<iostream>
int main()
{
	int x, y;
	char ch;
	std::cout << "�ó������ʵ�֣�+ - * / %�����㣬������������" << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "y = ";
	std::cin >> y;
	std::cout << "����������Ҫ�����㣺" << std::endl;
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
				std::cout << "����Ϊ0������Ƿ�";
			}
			else
			{
				std::cout << x / y;
			}
			break;
		case '%':			
			if (y == 0)
		{
			std::cout << "����Ϊ0������Ƿ�";
		}
				else
		{
				std::cout << x % y;
		}
			break;
		default:
			std::cout << "������Ƿ�";
	}
}