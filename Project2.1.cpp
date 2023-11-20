#include <iostream>
int main()
{
	char ch;
	std::cout << "ÇëÊäÈëÒ»¸ö×ÖÄ¸£º";
	std::cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
		ch -= 32;
		std::cout << ch << std::endl;
	}
	else if (ch >= 'A' && ch <= 'Z')
	{
		ch += 1;
		std::cout << static_cast<int>(ch) << std::endl;
	}

	return 0;
}