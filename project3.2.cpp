#include<iostream>
bool is_prime(int num)
{
	int count = 2;
	for (int i = 2;i < num;i++)
	{
		if (num % i != 0)
		{
			count++;
		}
	}
	if (count < num)
	{
		return false;
	}
	else if (count == num)
	{
		return true;
	}
}
int main()
{
	int num = 0;
	int x = 0;
	std::cout << "请输入一个数：" << std::endl;
	std::cin >> num;
	bool is_prime(int num);
	std::cout << is_prime(num) << std::endl;

	int Const = 200;
	int count = 0;
	int i = 2;//众所周知1既不是素数也不是合数
	while (count <= Const)
	{
		x = is_prime(i);
		if (x)
		{
			std::cout << i << "\t";
			count++;
			if (count % 10 == 0)
				std::cout << "\n";
		}
		i++;
	}
	return 0;
}
