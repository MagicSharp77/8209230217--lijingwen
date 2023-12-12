#include<iostream>
using namespace std;
const int C = 10;

void bubblesort(double list[10]) 
{
	double temp;
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < C - 1; j++) {
			if (list[j] > list[j + 1]) {
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed == true);
}

int main()
{
	double list[C];
	cout << "Please enter ten number : \n";
	for (int i = 0;i < C;i++)
		cin >> list[i];
	bubblesort(list);

	for (int k = 0;k < C;k++)
		cout << list[k] << " ";
	cout << endl;

	return 0;
}
