#include <iostream>
using namespace std;
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}
void readarray(int arr[100], int& arrlength)
{
	cout << "\nenter number of elements:\n";
	cin >> arrlength;

	cout << "\nenter array elements: \n";
	for (int i = 0; i < arrlength; i++)
	{
		cout << "Element [" << i + 1 << "] : ";
		cin >> arr[i];
	}
	cout << endl;
}
void printArray(int arr[100], int arrlength)
{
	for (int i = 0; i < arrlength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int timesrepeated(int number, int arr[100], int arrlength)
{
	int count = 0;
	for (int i = 0; i <= arrlength - 1; i++)
	{
		if (number == arr[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int arr[100], arrlength, numbertocheck;
	readarray(arr, arrlength);

	numbertocheck = ReadPositiveNumber("enter the number you want to check: ");
	cout << "\nOriginal array: ";
	printArray(arr, arrlength);
	cout << "\nnumber" << numbertocheck;
	cout << "is repeated;";
	cout << timesrepeated(numbertocheck, arr, arrlength) << "time(s)\n";
	return 0;
}