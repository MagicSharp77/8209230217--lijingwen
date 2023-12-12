#include<iostream>
using namespace std;
int main()
{
	const int C = 10;
	int list[C];
	cout << "Enter ten numbers£º" << endl;
	for (int i = 0;i < C;i++)
		cin >> list[i];
	cout << "The distinct numbers are:" << list[0] << "\t";
	for (int m = 1;m < C;m++)
	{
		for (int j = 0;j < m;j++)
		{
			if (list[m] != list[j])
			{
				if (j == m - 1)
					cout << list[m] << "\t";
				else
					continue;
			}
			else
				break;
		}
	}

	cout << endl;

	return 0;
}