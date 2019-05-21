#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arr[50], i, j, temp;

	cout << "Enter array elements: ";
	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "The array after sorting is: \n";
	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\nThe smallest integer is: " << arr[0];
	cout << "\nThe largest integer is: " << arr[9];
	cout << "\nThe average is: " << (arr[0] + arr[1] + arr[2] + arr[3] + arr[4] + arr[5] + arr[6] + arr[7] + arr[8] + arr[9]) / 10;

	_getch();
	return 0;
}