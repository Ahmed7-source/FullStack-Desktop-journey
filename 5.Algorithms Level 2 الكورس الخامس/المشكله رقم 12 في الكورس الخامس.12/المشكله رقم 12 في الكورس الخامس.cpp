#include <iostream>
#include < string>
using namespace std;
int readpoitivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
void printInvertednumberpattern(int number)
{
    cout << "\n";
    for (int i = number; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}


int main()
{
    printInvertednumberpattern(readpoitivenumber("please enter a positive number?"));
    return 0;
}
