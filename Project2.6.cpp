#include<iostream>
int main()
{
	std::cout << "该程序用于获取两数的最大公约数和最小公倍数" << std::endl;
	std::cout << "请输入两个数： " << std::endl;
	int x = 0;
	int y = 0;
	int i = 2;
	int t1 = 1;
	int t2 = 1;
	std::cin >> x;
	std::cin >> y;

	
	for (i; i <= (x < y ? x : y); i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			t1 = i;
		}
	}

	t2 = x * y / t1;

	std::cout << "最大公约数为： " << t1 << std::endl;
	std::cout << "最小公倍数为： " << t2 << std::endl;




}