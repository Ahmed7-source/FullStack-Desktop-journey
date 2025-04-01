#include <iostream>
using namespace std;

int main() {
    int numbers[100]; // مصفوفة لتخزين الأرقام، الحد الأقصى 100
    int count = 0;    // عدد الأرقام المدخلة

    int number1; // متغير لإدخال الرقم الأول
    cout << "\nplease enter a number? ";
    cin >> number1;

    // حفظ الرقم الأول في المصفوفة
    numbers[count] = number1;
    count++;

    cout << "\nDo you want to add more numbers?" << endl;
    cout << "1:yes" << endl;
    cout << "2:no" << endl;
    cin >> number1;

    if (number1 == 2) {
        // عرض العناصر
        cout << "Array Length: " << count << "\n";
        cout << "Array elements: ";
        for (int i = 0; i < count; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    else if (number1 == 1) {
        int number2;
        cout << "\nplease enter a number? ";
        cin >> number2;

        // حفظ الرقم الثاني في المصفوفة
        numbers[count] = number2;
        count++;

        cout << "\nDo you want to add more numbers?" << endl;
        cout << "1:yes" << endl;
        cout << "2:no" << endl;
        cin >> number1;

        if (number1 == 2) {
            // عرض العناصر
            cout << "Array Length: " << count << "\n";
            cout << "Array elements: ";
            for (int i = 0; i < count; i++) {
                cout << numbers[i] << " ";
            }
            cout << endl;
        }
        else if (number1 == 1) {
            int number3;
            cout << "\nplease enter a number? ";
            cin >> number3;

            // حفظ الرقم الثالث في المصفوفة
            numbers[count] = number3;
            count++;

            cout << "\nDo you want to add more numbers?" << endl;
            cout << "1:yes" << endl;
            cout << "2:no" << endl;
            cin >> number1;

            if (number1 == 2) {
                // عرض العناصر
                cout << "Array Length: " << count << "\n";
                cout << "Array elements: ";
                for (int i = 0; i < count; i++) {
                    cout << numbers[i] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
