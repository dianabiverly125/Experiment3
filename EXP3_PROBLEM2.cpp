#include <iostream>
#include <conio.h>

using namespace std;

const int province = 3;
const int day = 7;
char n;

int main()
{
	int temp[province][day];
	int i, j;
	cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n";
	for (i = 1; i <= province; i++)
	{
		for (j = 1; j<= day; j++)
		{
			if (i == 1) n = 'A';
			else if (i == 2) n = 'B';
			else n = 'C';
			cout << "Province " << n << ", Day " << j << ": "; cin >> temp[i][j];

		}
	}
	cout << "\n\n";
	cout << "\nDisplaying Values: \n";
	for (i = 1; i <= province; i++)
	{
		for (j = 1; j <= day; j++)
		{
			if (i == 1) n = 'A';
			else if (i == 2) n = 'B';
			else n = 'C';
			cout << "\nProvince " << n << ", Day " << j << ": " << temp[i][j];

		}
	}
	


	_getch();
	return 0;
}