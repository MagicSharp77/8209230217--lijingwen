#include<iostream>
int main()
{
	std::cout << "�ó������ڻ�ȡ���������Լ������С������" << std::endl;
	std::cout << "�������������� " << std::endl;
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

	std::cout << "���Լ��Ϊ�� " << t1 << std::endl;
	std::cout << "��С������Ϊ�� " << t2 << std::endl;




}