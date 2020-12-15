#include <iostream>
using namespace std;
int main()
{
	int cao = 40;

	for (int i = 0; i < cao; i++)
	{
		for (int j = 0; j < 7; j++)
			cout << "\t";
		for (int j = 0; j < cao - i; j++)
			cout << " ";
		if (i == cao - 1)
		{

			for (int j = 0; j < (1 + 2 * i) / 2; j++)
			{
				cout << "*";
				cout << " ";
			}
			cout << "*";
		}
		else
		for (int j = 0; j < 1 + i * 2; j++)
			cout << "*";
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 7; j++)
			cout << "\t";
		for (int j = 0; j < cao - 1; j++)
			cout << " ";
		cout << "***"<< endl;
	}
	for (int j = 0; j < 7; j++)
		cout << "\t";
	for (int i = 0; i < cao - 8; i++)
		cout << " ";
	cout << "Merry Christmas !" << endl;
	return 0;
}