#include<iostream>
#include<cmath>
int main()
{
	double a;
	double x = 0.0;
	double x1 = 0.0;
	std::cout << "该程序用于求得一个数的平方根" << std::endl;
	std::cout << "请输入一个数： ";
	std::cin >> a;

	if(a<0)
		std::cout << "错误，负数没有平方根" << std::endl;
	else if(a==0)
		std::cout << "该数的平方根是0。" << std::endl;
	else
	{ 
		x1 = a;
		while (fabs(x1 - x) > 1 / 10000)
		{
			x = x1;
			x1 = 0.5 * (x + a / x);
		}
		std::cout << "该数的平方根为： " << x;
			
	}

}