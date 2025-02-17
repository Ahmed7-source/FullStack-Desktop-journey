// Dynamic Memory Allocation

// Lesson #43 - Memory Management: new and delete : example
#include <iostream>
using namespace std;
int main()
{
	// declare an int pointer
	int* ptrX;
	// declare a float pointer
	float* ptrY;
	// dynamically allocate memory
	ptrX = new int;
	ptrY = new float;
	// assigning value to the memory
	*ptrX = 45;
	*ptrY = 58.35f;
	cout << *ptrX << endl;
	cout << *ptrY << endl;
	// deallocate the memory
	delete ptrX;
	delete ptrY;
	return 0;
}

// Lesson #44 - Dynamic Arrays: new and delete : example
#include <iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter total number of students: ";
	cin >> num;
	float* ptr;
	// memory allocation of num number of floats
	ptr = new float[num];
	cout << "Enter grades of students." << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student" << i + 1 << ": ";
		cin >> *(ptr + i);
	}
	cout << "\nDisplaying grades of students." << endl;
	for (int i = 0; i < num; i++) {
		cout << "Student" << i + 1 << ": " << *(ptr + i) << endl;
	}
	// ptr memory is released
	delete[] ptr;
	return 0;
}

// Lesson #45 - Stack vs Heap
// You must watch the video :)
