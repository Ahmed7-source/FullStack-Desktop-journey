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
void randomResult(int a[3][3], int m[3][3], int MatrixResults[3][3])
{
	cout << "\nResult :\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatrixResults[i][j] = a[i][j] * m[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf(" %0*d ", 2, MatrixResults[i][j]);
		}
		cout << endl;
	}
}

int main()
{
	srand(time(0)); // Initialize random seed once
	int a[3][3];
	int m[3][3];
	int MatrixResults[3][3];
	cout << "Matrix 1 :\n";
	randommatrix1(a);
	cout << "\nMatrix 2 :\n";
	randommatrix2(m);
	randomResult(a, m, MatrixResults);
	system("pause>0");
}

