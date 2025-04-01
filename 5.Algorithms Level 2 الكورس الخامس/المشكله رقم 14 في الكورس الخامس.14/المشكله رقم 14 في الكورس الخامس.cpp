#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

void printInvertedNumberPattern(int number)
{
    cout << "\n";
    for (int i = 65 + number - 1; i >= 65; i--)
    {
        for (int j = 1; j <= number - (65 + number - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    printInvertedNumberPattern(readPositiveNumber("Please enter a positive number:"));
    return 0;
}
