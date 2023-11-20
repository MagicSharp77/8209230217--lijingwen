#include<iostream>
using namespace std;
int main()
{
	cout << "bool length:" << sizeof(bool) << endl;
	cout << "char length:" << sizeof(char) << endl;
	cout << "unsighed char length:" << sizeof(unsigned char) << endl;
	cout << "wchar_t length:" << sizeof(wchar_t) << endl;
	cout << "int length:" << sizeof(int) << endl;
	cout << "signed int length:" << sizeof(signed int) << endl;
	cout << "unsigned int length:" << sizeof(unsigned int) << endl;
	cout << "short int length:" << sizeof( short int) << endl;
	cout << "long int length:" << sizeof(long int) << endl;
	cout << "unsigned short length:" << sizeof(unsigned short) << endl;
	cout << "unsigned long length:" << sizeof(unsigned long) << endl;
	cout << "float length:" << sizeof(float) << endl;
	cout << "double length:" << sizeof(double) << endl;
	cout << "long double length:" << sizeof(long double) << endl;

	return 0;
}