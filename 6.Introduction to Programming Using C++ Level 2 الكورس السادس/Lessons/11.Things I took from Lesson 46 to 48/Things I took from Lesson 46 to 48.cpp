// Vectors Part II

// Lesson #46 - Access Elements : example 
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> num{ 1, 2, 3, 4, 5 };
	cout << "\n\n using .at(i) \n";
	cout << "Element at Index 0: " << num.at(0) << endl;
	cout << "Element at Index 2: " << num.at(2) << endl;
	cout << "Element at Index 4: " << num.at(4) << endl;
	cout << "\n\n using [i]\n";
	cout << "Element at Index 0: " << num[0] << endl;
	cout << "Element at Index 2: " << num[2] << endl;
	cout << "Element at Index 4: " << num[4] << endl;
	return 0;
}

// Lesson #47 - Change Elements : example
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> num{ 1, 2, 3, 4, 5 };
	cout << "Initial Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}
	cout << "\n\nUpdated Vector: ";
	for (int& i : num) {
		i = 20;
		cout << i << " ";
	}
	num[1] = 40;
	num.at(2) = 80;
	num.at(4) = 90;
	cout << "\n\nUpdated Vector: ";
	for (const int& i : num) {
		cout << i << " ";
	}
	return 0;
}

// Lesson #48 - Vector Iterators : example
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> num{ 1, 2, 3, 4, 5 };
	// declare iterator
	vector<int>::iterator iter;
	// use iterator with for loop
	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter << " ";
	}
	return 0;
}
