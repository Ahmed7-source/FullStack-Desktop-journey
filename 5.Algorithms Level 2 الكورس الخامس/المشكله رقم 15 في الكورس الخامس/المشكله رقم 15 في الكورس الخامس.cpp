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

void printNumberPattern(int number)
{
    cout << "\n";
    for (int i = 65; i <= 65 + number - 1; i++)
    {
        for (int j = 1; j <= i - 65 + 1; j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    printNumberPattern(readPositiveNumber("Please enter a positive number:"));
    return 0;
}