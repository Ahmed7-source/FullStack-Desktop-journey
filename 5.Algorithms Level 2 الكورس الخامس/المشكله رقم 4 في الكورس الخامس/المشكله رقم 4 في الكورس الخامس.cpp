#include <iostream>
#include < string>
using namespace std;
int readpositivenumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
bool isperfectnumber(int number)
{
    int sum = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum += i;
    }
    return number == sum;
}
void printperfectnumberfrom1IoN(int number)
{
    for (int i = 1; i <= number; i++)
    {
        if (isperfectnumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    printperfectnumberfrom1IoN(readpositivenumber("please enter a positive number?"));
    return 0;
}