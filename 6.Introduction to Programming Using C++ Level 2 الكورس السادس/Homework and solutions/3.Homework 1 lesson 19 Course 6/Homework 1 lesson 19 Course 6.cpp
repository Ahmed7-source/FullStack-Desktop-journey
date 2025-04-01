#include <iostream>
using namespace std;
void PrintNumbersFromNtoM(int M, int N)
{
	if (M >= N)
	{
		cout << M << endl;
		PrintNumbersFromNtoM(M - 1, N);
	}
}
int main() {
	PrintNumbersFromNtoM(10, 1);
	return 0;
}
