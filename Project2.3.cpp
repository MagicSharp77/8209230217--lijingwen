#include<iostream>
int main()
{
	float a, b, c;
	float C;
	std::cout << "�����������ε����߳�" << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	if (a + b <= c || a + c <= b || b + c <= a)
	{
		std::cout << "�ⲻ��������";
	}
	else 
	{
		C = a + b + c;
		std::cout << "�����ε��ܳ�C = " << C << std::endl;
		if (a == b || a == c || b == c) 
		{
			std::cout << "���������ǵ���������" << std::endl;
		}
		else
		{
			std::cout << "�������β��ǵ���������" << std::endl;
		}
	}

}