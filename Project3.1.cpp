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
	std::cout << "��������������" << std::endl;
	std::cin >> m >> n;
	if (m == 0 || n == 0)
	{
		std::cout << "�������" << std::endl;
	}
	else
	{
		Funtion(m, n);
		std::cout << "���Լ��Ϊ��" << m << std::endl
			<< "��С������Ϊ��" << n << std::endl;
	}
}

