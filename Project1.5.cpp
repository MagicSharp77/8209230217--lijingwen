#include<iostream>
#include<iomanip>
int main()
{
	float F, t;
	std::cout << "该程序用于将华氏度转化为摄氏度。" << std::endl;
	std::cout << "请输入华氏度：F = ";
	std::cin >> F;
	t = (F - 32) / 1.8;
	std::cout << std::fixed << std::setprecision(2) << "对应的摄氏度为：t = " << t << std::endl;

}