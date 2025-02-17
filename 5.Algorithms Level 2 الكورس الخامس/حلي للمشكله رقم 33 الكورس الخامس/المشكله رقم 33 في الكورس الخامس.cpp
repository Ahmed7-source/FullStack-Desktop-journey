#include <iostream>
#include <string>
using namespace std;

enum enchartype { samallLetter = 1, capitalLetter = 2, specialcharacter = 3, digit = 4 };

int randomnumber(int from, int to)
{
    //Function to generate a random number
    int randnum = rand() % (to - from + 1) + from;
    return randnum;
}
char getrandomcharacter(enchartype chartype)
{
    switch (chartype)
    {
    case enchartype::samallLetter:
    {
        return char(randomnumber(97, 122));
        break;
    }
    case enchartype::capitalLetter:
    {
        return char(randomnumber(65, 90));
        break;
    }
    case enchartype::specialcharacter:
    {
        return char(randomnumber(33, 47));
        break;
    }
    case enchartype::digit:
    {
        return char(randomnumber(48, 57));
        break;
    }
    }
}
int readpositivernumber(string message)
{
    int number = 0;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
string generateword(enchartype chartype, short length)
{
    string word;
    for (int i = 0; i <= length; i++)
    {
        word = word + getrandomcharacter(chartype);
       
    }
    return word;
}
string generateKey()
{

    string Key = "";
 

    Key = generateword(enchartype::capitalLetter, 4) + "-";
    Key = Key + generateword(enchartype::capitalLetter, 4) + "-";
    Key = Key + generateword(enchartype::capitalLetter, 4) + "-";
    Key = Key + generateword(enchartype::capitalLetter, 4);
    return Key;
}


void GenerateKeys(short NumberOfKeys)
{
    cout << "\nArray elements:\n\n";
    for (int i = 0; i < NumberOfKeys; i++)
    {
        cout << "Array [" << i << "] : ";
        cout << generateKey() << endl;
    }
 
}
int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));
    GenerateKeys(readpositivernumber("Pleaes enter how many keys to generate ?  "));
     return 0;
}