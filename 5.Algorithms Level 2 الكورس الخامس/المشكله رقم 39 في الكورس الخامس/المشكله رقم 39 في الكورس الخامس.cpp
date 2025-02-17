#include <iostream>
using namespace std;

enum enPrimNotPrime {prime = 1, notprime = 2};

enPrimNotPrime CheckPrime(int number)
{
	int m = round(number / 2);

	for (int counter = 2; counter <= m; counter++)
	{
		if (number % counter == 0)
			return enPrimNotPrime::notprime;
	}
	return enPrimNotPrime::prime;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = RandomNumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	//its a new element so we need to add the length by 1
	arrLength++;
	arr[arrLength - 1] = Number;
}
void CopyPrimeNumbers(int arrSource[100], int arrDestination[100],
	int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		if (CheckPrime(arrSource[i]) == enPrimNotPrime::prime)
		{
			AddArrayElement(arrSource[i], arrDestination,
				arrDestinationLength);
		}
}
int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100], arrLength = 0, arr2Length = 0;
	int arr2[100];
	FillArrayWithRandomNumbers(arr, arrLength);
	CopyPrimeNumbers(arr, arr2, arrLength, arr2Length);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);
	cout << "\nArray 2 Prime numbers:\n";
	PrintArray(arr2, arr2Length);
	return 0;
}