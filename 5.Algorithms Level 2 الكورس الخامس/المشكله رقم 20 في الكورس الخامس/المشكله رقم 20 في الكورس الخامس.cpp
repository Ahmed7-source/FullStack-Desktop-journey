#include <iostream>
#include <string>
using namespace std;
int randomnumber(int from, int to)
{
	//Function to generate a random number
	int randnum = rand() % (to - from + 1) + from;
	return randnum;
}
enum enchartype {
	samallLetter = 1, capitalLetter = 2, specialcharacter = 3, digit = 4
};
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
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	cout << getrandomcharacter(enchartype::samallLetter) << endl;
	cout << getrandomcharacter(enchartype::capitalLetter) << endl; 
	cout << getrandomcharacter(enchartype::specialcharacter) << endl;
	cout << getrandomcharacter(enchartype::digit) << endl;
	return 0;
}
