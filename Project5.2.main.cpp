//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
using namespace std;
int main()
{
	Student stud;                //�������
	stud.set_value(007,"tcg", 'm');
	stud.display();              //ִ��stud�����display����
	return 0;
}