#include <iostream>
using namespace std;
int randomnumber(int from, int to)
{
	//Function to generate a random number
	int randnum = rand() % (to - from + 1) + from;
	return randnum;
}
void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
		arr[i] = randomnumber(1, 100);
}
void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";
	cout << "\n";
}
short findnumberpositioninArray(int number, int arr[100], int arrLength)
{
	/*This function will search for a number in array and return
its index, or return -1 if it does not exists*/
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == number)
			return i;// and return the index
	}
	//if you reached here, this means the number is not found
	return -1;
}
int readnumber()
{
	int number;
	cout << "\nplease enter a number to search for?\n";
	cin >> number;
	return number;
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[100], arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);
	int number = readnumber();
	cout << "\nnumber you are looking for is:" << number << endl;
	short numberposition = findnumberpositioninArray(number, arr, arrLength);
	if (numberposition == -1)
		cout << "the number is not found :-(\n";
	else
	{
		cout << "the number found at position:";
		cout << numberposition << endl;

		cout << "the number found its order :";
		cout << numberposition + 1 << endl;
	}
	return 0;
}

