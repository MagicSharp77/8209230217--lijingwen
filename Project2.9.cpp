#include<iostream>
int main()
{
	int num = 2, sum = 2, day = 1;
	double aver;

	while (sum <= 100)
	{
		num = num * 2;
		sum = sum+num;
		day++;
	}

	aver = (sum-num) * 0.8 / (day--);
	std::cout << aver;
	


}