// Pointers

// Lesson #35 - What is Pointer? : example
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "a value = " << a << endl;
	cout << "a address = " << &a << endl;
	int* p;
	p = &a;
	cout << "Pointer Value = " << p;
	cout << endl;
	return 0;
}

// Lesson #36 - Dereferencing Pointer : example
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	cout << "a value = " << a << endl;
	cout << "a address = " << &a << endl;
	int* p;
	p = &a;
	cout << "Pointer Value = " << p << endl;
	cout << "Value of the address that p is pointing to is " << *p << endl;
	*p = 20;
	cout << a << endl;
	cout << *p << endl;
	a = 30;
	cout << a << endl;
	cout << *p << endl;
	cout << endl;
	return 0;
}

// Lesson #37 - Common Mistakes with Pointers : example
#include <iostream>
using namespace std;
int main()
{
	int x, * p;
	// Wrong!
	// p is an address but x is not
	p = x;
	// Correct!
	// p is an address and so is &x
	p = &x;
	// Wrong!
	// &x is an address
	// *p is the value stored in &x
	*p = &x;
	// Correct!
	// *p is the value and so x
	*p = x;
	return 0;
}

// Lesson #38 - Pointers vs References : example
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
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;
	int b = 20;
	p = &b;
	cout << p << endl;
	cout << *p << endl;
	return 0;
}

// Lesson #39 - Call by Reference: Using pointers : This has 2 codes
// code 1
// Swap Using Reference : example
#include <iostream>
using namespace std;
void swap(int& n1, int& n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
int main()
{
	int a = 1, b = 2;
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a, b);
	cout << "\nAfter swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

// code 2
// Swap Using Pointers : example
#include <iostream>
using namespace std;
void swap(int* n1, int* n2)
{
	int temp;
	temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}
int main()
{
	int a = 1, b = 2;
	cout << "Before swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(&a, &b);
	cout << "\nAfter swapping" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	return 0;
}

// Lesson #40 - Pointers and Arrays : example
#include <iostream>
using namespace std;
int main()
{
	int arr[4] = { 10,20,30,40 };
	int* ptr;
	ptr = arr;
	//ptr is equivalent to &arr[0];
	//ptr + 1 is equivalent to &arr[1];
	//ptr + 2 is equivalent to &arr[2];
	//ptr + 3 is equivalent to &arr[3];
	cout << "Addresses are:\n";
	cout << ptr << endl;
	cout << ptr + 1 << endl;
	cout << ptr + 2 << endl;
	cout << ptr + 3 << endl;
	cout << "\nValues are: \n";
	cout << *(ptr) << endl;
	cout << *(ptr + 1) << endl;
	cout << *(ptr + 2) << endl;
	cout << *(ptr + 3) << endl;
	return 0;
}

// Lesson #41 - Pointers and Structure : example
#include <iostream>
using namespace std;
struct stEmplyee
{
	string Name;
	float Salary;
};
int main()
{
	stEmplyee Employee1, * ptr;
	Employee1.Name = "Mohammed Abu-Hadhoud";
	Employee1.Salary = 5000;
	cout << Employee1.Name << endl;
	cout << Employee1.Salary << endl;
	ptr = &Employee1;
	cout << "\nUsing Pointer:\n";
	cout << ptr->Name << endl;
	cout << ptr->Salary << endl;
	return 0;
}

// Lesson #42 - Pointer to Void : example
#include <iostream>
using namespace std;
int main()
{
	void* ptr;
	float f1 = 10.5;
	int x = 50;
	ptr = &f1;
	cout << ptr << endl;
	cout << *(static_cast<float*>(ptr)) << endl;
	ptr = &x;
	cout << ptr << endl;
	cout << *(static_cast<int*>(ptr)) << endl;
	return 0;
}

