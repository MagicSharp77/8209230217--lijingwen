#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour = 0;
	int minute = 0;
	int sec = 0;
public:
	int set_time(int h,int m,int s)
	{
		cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
		return 0;
	}

	int showtime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
		return 0;
	}

};
int main()
{
	Time t1;           //����t1ΪTime�����
	int h = 0, m = 0, s = 0;
	t1.set_time(h,m,s);
	t1.showtime();

	return 0;
}