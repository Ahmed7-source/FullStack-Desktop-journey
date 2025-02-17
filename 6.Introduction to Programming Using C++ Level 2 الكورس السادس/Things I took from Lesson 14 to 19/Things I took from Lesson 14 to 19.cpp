// More About Functions

// Lesson #14 - Declaration Vs Definition : example 
#include <iostream>
using namespace std;
// function declaration
void add(int, int);
int main() {
	add(10, 20);
	return 0;
}
// function Definition
void add(int a, int b) {
	cout << (a + b);
}

// Lesson #15 - Default Parameters : example 
#include <iostream>
using namespace std;
int MySum(int a, int b, int c = 0, int d = 0) {
	return (a + b + c + d);
}
int main() {
	cout << MySum(10, 20) << endl;
	cout << MySum(10, 20, 30) << endl;
	cout << MySum(10, 20, 30, 40) << endl;
	return 0;
}

// Lesson #16 - Function Overloading : example 
#include <iostream>
using namespace std;
double MySum2DoubleNumbers(double a, double b) {
	return (a + b);
}
int MySum2IntegerNumbers(int a, int b) {
	return (a + b);
}
int MySum3IntegerNumbers(int a, int b, int c) {
	return (a + b + c);
}
int MySum4IntegerNumbers(int a, int b, int c, int d) {
	return (a + b + c + d);
}
int main() {
	cout << MySum2IntegerNumbers(10, 20) << endl;
	cout << MySum2DoubleNumbers(10.1, 20.1) << endl;
	cout << MySum3IntegerNumbers(10, 20, 30) << endl;
	cout << MySum4IntegerNumbers(10, 20, 30, 40) << endl;
	return 0;
}

// Lesson #17 - Call Stack/Call Hierarchy : example 
#include <iostream>
using namespace std;
void Function4()
{
	cout << "Hi I'm function4 " << endl;
}
void Function3()
{
	Function4();
}
void Function2()
{
	Function3();
}
void Function1()
{
	Function2();
}
int main() {
	Function1();
	return 0;
}

// Lesson #18 - VS Function Tips : Important tips in the video

// Lesson #19 - Recursion : example 
#include <iostream>
using namespace std;
void PrintNumbersFromNtoM(int N, int M)
{
	if (N <= M)
	{
		cout << N << endl;
		PrintNumbersFromNtoM(N + 1, M);
	}
}
int main() {
	PrintNumbersFromNtoM(1, 10);
	return 0;
}
