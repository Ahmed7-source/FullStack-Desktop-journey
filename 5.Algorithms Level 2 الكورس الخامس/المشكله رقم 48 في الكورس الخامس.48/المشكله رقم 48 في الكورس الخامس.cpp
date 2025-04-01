#include <iostream>
using namespace std;
int myfloor(float number)
{
    if (number > 0)
        return int(number);
    else
        return (number);
}
float readnumber()
{
    float number;
    cout << "please enter a number?";
    cin >> number;
    return number;
}

int main()
{
    float number = readnumber();
    cout << "my myfloor result : " << myfloor(number) << endl;
    cout << "C++ floor result : " << floor(number) << endl;
    return 0;
}

