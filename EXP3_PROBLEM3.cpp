#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i, j;
	int size;
	char elem[20];
	char temp;
	cout << "Enter characters: "; cin >> elem;
	for (i = 0; elem[i]; i++)
	{
		size=i;
	}
	j = i - 1; i = 0;
	while (elem[i] > elem[j])
	{
		temp = elem[i];
		elem[i] = elem[j];
		elem[j] = temp;
		i++; j--;
	}
	cout << "\nReverse order: ";
	for (i=0; i<=size; i++)
	{
		cout << elem[i];
	}
	cout << "\n\nArray Size: " << size + 1;

	_getch();
	return 0;
}