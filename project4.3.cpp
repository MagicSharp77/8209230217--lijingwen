#include<iostream>
using namespace std;
int main()
{
	const int C = 100;
	bool list[C];
	for (int i = 0;i < C;i++)
	{
		list[i] = false;
	}
	for (int j = 0;j < C;j++)
	{
		for (int k = j;k < C;k += j + 1)
		{
			if (list[k])
				list[k] = false;
			else
				list[k] = true;
		}
	}
	for (int m = 0;m < C;m++)
	{
		if (list[m])
			cout << m + 1 << "  ";
	}
	cout << endl;

	return 0;
}