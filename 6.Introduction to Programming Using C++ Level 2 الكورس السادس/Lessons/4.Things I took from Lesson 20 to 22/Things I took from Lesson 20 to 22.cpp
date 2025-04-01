// More About Variables

// Lesson #20 - Static Variables : example
#include <iostream>
using namespace std;
void MyFunc() {
	static int Number = 1;
	cout << "Value of Number: " << Number << "\n";
	Number++;
}
int main()
{
	MyFunc();
	MyFunc();
	MyFunc();
	return 0;
}

//  Lesson #21 - Automatic Variables : example
#include <iostream>
using namespace std;
int main()
{
	auto x = 10; //Type Integer
	auto y = 12.5; //Type Double
	auto z = "Mohammed Abu-Hadhoud"; //Type String
	cout << x << endl;
	cout << y << endl;
	cout << z << endl;
	return 0;
}

//  Lesson #22 - Register Variable