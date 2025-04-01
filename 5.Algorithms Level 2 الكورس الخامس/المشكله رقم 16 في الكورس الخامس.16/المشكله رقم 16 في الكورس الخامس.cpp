#include <iostream>
#include <string>
using namespace std;
void printwordsfromAAAtoZZZ()
{
    cout << "\n";
    string word = " ";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int K = 65; K <= 90; K++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(K);
                cout << word << endl;
                word = "";
            }
        }
        cout << "\n________________________________\n";
    }
}

int main()
{
    printwordsfromAAAtoZZZ();
    return 0;
}