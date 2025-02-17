#include <iostream>
#include <string>
using namespace std;
string readpasswoed()
{
    string password;
    cout << "please enter a 3-leter password (all capital)?\n";
    cin >> password;
    return password;
}
bool Guesspassword(string originalpassword)
{
    string word = "";
    int counter = 0;
    cout << "\n";
    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int K = 65; K <= 90; K++)
            {
                word = word + char(i);
                word = word + char(j);
                word = word + char(K);
                counter++;
                cout << "trial [" << counter << "] : ";
                cout << word << endl;
                if (word == originalpassword)
                {
                    cout << "\npassword is " << word << "\n";
                    cout << "Found after ";
                    cout << counter << "Trial(s)\n";
                    return true;
                }
                word = "";

            }
        }
        
    }
    return false;
}

int main()
{
    Guesspassword(readpasswoed());
    return 0;
}