#include<iostream>
int main()
{
	float a, b, c;
	float C;
	std::cout << "请输入三角形的三边长" << std::endl;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	std::cout << "c = ";
	std::cin >> c;

	if (a + b <= c || a + c <= b || b + c <= a)
	{
		std::cout << "这不是三角形";
	}
	else 
	{
		C = a + b + c;
		std::cout << "三角形的周长C = " << C << std::endl;
		if (a == b || a == c || b == c) 
		{
			std::cout << "该三角形是等腰三角形" << std::endl;
		}
		else
		{
			std::cout << "该三角形不是等腰三角形" << std::endl;
		}
	}

}