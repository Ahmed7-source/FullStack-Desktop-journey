// References

// Lesson #33 - Call ByRef/ByVal Important Review : exapmle
// Lesson in 3 code
// ByVal : code 1
#include <iostream>
using namespace std;
void Function1(int x)
{
	x++;
}
int main()
{
	int a = 10;
	Function1(a);
	cout << "\n a after calling function1 = " << a << endl;
	return 0;
}
// ByRef : code 2
#include <iostream>
using namespace std;
void Function2(int& x)
{
	x++;
}
int main()
{
	int a = 10;
	Function2(a);
	cout << "\n a after calling function1 = " << a << endl;
	return 0;
}
// code 3
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "Value of a = " << a << endl;
	cout << "Address/Reference of a = " << &a << endl;
	return 0;
}

// Lesson #34 - Creating References : example
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int& x = a;
	cout << &a << endl;
	cout << &x << endl;
	cout << a << endl;
	cout << x << endl;
	x = 20;
	cout << a << endl;
	cout << x << endl;
	a = 30;
	cout << a << endl;
	cout << x << endl;
	return 0;
}

