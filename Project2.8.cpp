#include<iostream>
#include<cmath>
int main()
{
	double a;
	double x = 0.0;
	double x1 = 0.0;
	std::cout << "�ó����������һ������ƽ����" << std::endl;
	std::cout << "������һ������ ";
	std::cin >> a;

	if(a<0)
		std::cout << "���󣬸���û��ƽ����" << std::endl;
	else if(a==0)
		std::cout << "������ƽ������0��" << std::endl;
	else
	{ 
		x1 = a;
		while (fabs(x1 - x) > 1 / 10000)
		{
			x = x1;
			x1 = 0.5 * (x + a / x);
		}
		std::cout << "������ƽ����Ϊ�� " << x;
			
	}

}