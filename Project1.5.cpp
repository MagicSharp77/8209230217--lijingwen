#include<iostream>
#include<iomanip>
int main()
{
	float F, t;
	std::cout << "�ó������ڽ����϶�ת��Ϊ���϶ȡ�" << std::endl;
	std::cout << "�����뻪�϶ȣ�F = ";
	std::cin >> F;
	t = (F - 32) / 1.8;
	std::cout << std::fixed << std::setprecision(2) << "��Ӧ�����϶�Ϊ��t = " << t << std::endl;

}