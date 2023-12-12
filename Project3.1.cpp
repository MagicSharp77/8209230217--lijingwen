#include<iostream>
int Funtion(int& x, int& y)
{
	int t = 1;
	for (int i = 2;i < (x < y ? x : y);i++)
	{
		if (x % i == 0)
			t = i;
	}
	return t, x* y / t;
}

int main()
{
	int m = 0, n = 0;
	int max = 0, min = 0;
	std::cout << "请输入两个数：" << std::endl;
	std::cin >> m >> n;
	if (m == 0 || n == 0)
	{
		std::cout << "程序出错" << std::endl;
	}
	else
	{
		Funtion(m, n);
		std::cout << "最大公约数为：" << m << std::endl
			<< "最小公倍数为：" << n << std::endl;
	}
}

