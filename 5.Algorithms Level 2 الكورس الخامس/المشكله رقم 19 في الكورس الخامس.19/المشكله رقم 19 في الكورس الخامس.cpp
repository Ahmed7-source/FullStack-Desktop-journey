#include <iostream>
#include <cstdlib>
using namespace std;
int randomnumber(int from, int to)
{
	//Function to generate a random number
	int randnum = rand() % (to - from + 1) + from;
	return randnum;
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	cout << randomnumber(1, 10) << endl;
	cout << randomnumber(1, 10) << endl;
	cout << randomnumber(1, 10) << endl;
	return 0;
}