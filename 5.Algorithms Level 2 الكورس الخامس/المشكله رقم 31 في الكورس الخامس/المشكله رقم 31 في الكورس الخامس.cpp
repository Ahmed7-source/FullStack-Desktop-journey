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
void Swap(int& A, int& B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
}
void FillArrayWith1toN(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		arr[i] = i + 1;
}
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void shuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);

	}
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
int main() {
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100];
	int arrLength = ReadPositiveNumber("\nEnter number of elements:");
		FillArrayWith1toN(arr, arrLength);
	cout << "\nArray elements before shuffle:\n";
	PrintArray(arr, arrLength);
	shuffleArray(arr, arrLength);
	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrLength);
	return 0;
}