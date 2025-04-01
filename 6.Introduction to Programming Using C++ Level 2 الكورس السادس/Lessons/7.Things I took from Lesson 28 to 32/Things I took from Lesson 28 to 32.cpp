// Vectors Part I

// Lesson # 28 - Introduction , Declaration and Initialization : example
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	// std::vector<T> vector_name;
	vector <int> vNumbers = { 10, 20, 30, 40, 50 };
	cout << "Numbers Vector = ";
	// ranged loop
	for (int& Number : vNumbers) {
		cout << Number << " ";
	}
	cout << endl;
	return 0;
}

// Lesson # 29 - Add elements : example
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector <int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "Numbers Vector: \n\n";
	// ranged loop
	for (int& Number : vNumbers) {
		cout << Number << endl;
	}
	cout << endl;
	return 0;
}

// Lesson # 30 - Vector of Structure : example 
#include <vector>
#include <iostream>
using namespace std;
struct stEmployee
{
	string FirstName;
	string LastName;
	float Salary;
};
int main()
{
	// std::vector<T> vector_name;
	vector <stEmployee> vEmployees;
	stEmployee tempEmployee;
	tempEmployee.FirstName = "Mohammed";
	tempEmployee.LastName = "Abu-Hahdoud";
	tempEmployee.Salary = 5000;
	vEmployees.push_back(tempEmployee);
	tempEmployee.FirstName = "Ali";
	tempEmployee.LastName = "Maher";
	tempEmployee.Salary = 300;
	vEmployees.push_back(tempEmployee);
	tempEmployee.FirstName = "Aya";
	tempEmployee.LastName = "Omran";
	tempEmployee.Salary = 1000;
	vEmployees.push_back(tempEmployee);
	cout << "Employees Vector: \n\n";
	for (stEmployee& Employee : vEmployees) {
		cout << "FirstName: " << Employee.FirstName << endl;
		cout << "LastName : " << Employee.LastName << endl;
		cout << "Salary : " << Employee.Salary << endl;
		cout << endl;
	}
	cout << endl;
	return 0;
}

// Lesson # 31 - Remove elements : example 
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector <int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	vNumbers.pop_back();
	cout << "Numbers Vector: \n\n";
	// ranged loop
	for (int& Number : vNumbers) {
		cout << Number << endl;
	}
	cout << endl;
	return 0;
}

// Lesson #32 - Vector Functions : example
#include <vector>
#include <iostream>
using namespace std;
int main()
{
	vector <int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);
	cout << "First Element: " << vNumbers.front() << endl;
	cout << "Last Element: " << vNumbers.back() << endl;
	//returns the number of elements present in the vector
	cout << "Size: " << vNumbers.size() << endl;
	//check the overall size of a vector
	cout << "Capacity : " << vNumbers.capacity() << endl;
	//returns 1 (true) if the vector is empty
	cout << "Empty : " << vNumbers.empty() << endl;
	return 0;
}

