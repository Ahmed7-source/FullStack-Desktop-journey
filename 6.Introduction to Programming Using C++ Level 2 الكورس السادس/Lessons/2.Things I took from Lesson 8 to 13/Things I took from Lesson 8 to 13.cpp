// Miscellaneous

// Lesson #08 - Library: Create Your Own Library : A library is like a bag where you put the things you need.

// Lesson #09 - Ternary Operator: Short Hand IF : example 
#include <iostream>
using namespace std;
int main() {
	int mark = 90;
	string result;
    // Using short hand IF
	result = (mark >= 50) ? "PASS" : "FAIL";

	cout << result << endl;
	return 0;
}


// Lesson #10 - Ranged Loop : example 
#include<iostream>
using namespace std;
int main()
{
	int Array1[] = { 1, 2, 3, 4 };
	for (int n : Array1) {
		cout << n << endl;
	}
	return 0;
}

// Lesson #11 - Validate Number : example 
#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter a number?" << endl;
	cin >> Number;
	while (cin.fail())
	{
		// user didn't input a number
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << "Invalid Number, Enter a valid one:" << endl;
		cin >> Number;
	}
	return Number;
}
int main()
{
	cout << "Your Number is:" << ReadNumber();
}

// Lesson #12 - Bitwise AND operator : example 
#include <iostream>
using namespace std;
int main()
{
	cout << "Result:" << (12 & 25);
}

// Lesson #13 - Bitwise OR operator : example 
#include <iostream>
using namespace std;
int main()
{
	cout << "Result:" << (12 | 25);
}
