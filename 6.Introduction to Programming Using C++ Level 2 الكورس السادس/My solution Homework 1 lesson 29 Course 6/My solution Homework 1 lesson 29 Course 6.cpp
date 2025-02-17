#include <vector>
#include <iostream>
using namespace std;

void readnumber(vector<int>& vNumbers)
{
    int number2;
    int number;
    while (true) {
        cout << "please enter your number: ";
        cin >> number;
        vNumbers.push_back(number);
        cout << "Do you want to read more numbers? ";
        cout << "\n1: yes" << endl;
        cout << "2: no" << endl;
        cin >> number2;
        if (number2 == 1) {
            return readnumber(vNumbers);
        }
        else if (number2 == 2)
        {
            break;
        }
    }
}

void readnumber2(const vector<int>& vNumbers)
{
    cout << "Numbers Vector: \n\n";
    for (const int& Number : vNumbers) {
        cout << Number << endl;
    }
    cout << endl;
}

int main()
{
    vector<int> vNumbers;
    readnumber(vNumbers);
    readnumber2(vNumbers);
    return 0;
}
