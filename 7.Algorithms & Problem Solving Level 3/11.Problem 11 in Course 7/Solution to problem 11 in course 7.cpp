#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randommatrix1(int a[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            a[i][j] = rand() % 11;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %0*d ", 2, a[i][j]);
        }
        cout << endl;
    }
}

void randommatrix2(int m[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            m[i][j] = rand() % 11;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %0*d ", 2, m[i][j]);
        }
        cout << endl;
    }
}

int summatrix(int a[3][3])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
void equalmatrix(int a[3][3], int m[3][3])
{
    int sum1 = summatrix(a);
    int sum2 = summatrix(m);

    if (sum1 == sum2)
    {
        cout << "YES : both martices are equal." << endl;
    }
    else
    {
        cout << "NO :  martices are not equal . " << endl;
    }
}

int main()
{
    srand(time(0));
    int a[3][3];
    int m[3][3];
    cout << "Matrix 1\n";
    randommatrix1(a);
    cout << "Matrix 2\n";
    randommatrix2(m);
    equalmatrix(a, m);
    system("pause>0");
}


