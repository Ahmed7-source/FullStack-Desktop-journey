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
int CountDigitFrequency(short DigitToCheck, int Number)
{
	int FreqCount = 0, Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		if (DigitToCheck == Remainder)
		{
			FreqCount++;
		}
	}
	return FreqCount;
}
void printalldigitsfrequencey(int number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short digitfrequency = 0;
		digitfrequency = CountDigitFrequency(i, number);
		if (digitfrequency > 0)
		{
			cout << "digit" << i << "frequencey is " << digitfrequency << "time(s).\n";

		}
	}
}
int main()
{
	int number = ReadPositiveNumber("please enter the a number?");
	printalldigitsfrequencey(number);
	return 0;
}