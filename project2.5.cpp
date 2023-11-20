#include<iostream>
int main()
{
	char ch;
	std::cout << "ÇëÊäÈëÒ»ÐÐ×Ö·û£º" << std::endl;
	int letter = 0, space = 0, digit = 0, others = 0;
	while ((ch = getchar()) != '\n')
	{
		if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
			letter++;
		else if (ch >= '0' && ch <= '9')
			digit++;
		else if (ch == ' ')
			space++;
		else
			others++;
	}
	std::cout << "letternum is " << letter << std::endl;
	std::cout << "spacenum is " << space << std::endl;
	std::cout << "digitnum is " << digit << std::endl;
	std::cout << "othersnum is " << others << std::endl;



}
