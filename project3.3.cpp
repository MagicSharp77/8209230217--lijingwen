#include<iostream>
#include"mytemperature.h"

int main()
{
	std::cout << "�������Ϻ���cin��ǿ�Ʋ�������Ҫ��ƺ���" << std::endl;
	std::cout << "Celsius    Fahrenheit    |    Fahrenheit    Celsius" << std::endl;
	double cel = 0;
	double fah = 0;
	std::cout << "�����룺" << std::endl;
	while (1)
	{
		std::cin >> cel;
		std::cout << "\t" "\t""\t" "\t" << celsius_to_fah(cel) << "\t" "\t""\t" "\t""|""\t" "\t""\t" "\t";
		std::cin >> fah;
		std::cout << "\t" "\t""\t" "\t" << fahrenheit_to_cels(fah);
	}

}