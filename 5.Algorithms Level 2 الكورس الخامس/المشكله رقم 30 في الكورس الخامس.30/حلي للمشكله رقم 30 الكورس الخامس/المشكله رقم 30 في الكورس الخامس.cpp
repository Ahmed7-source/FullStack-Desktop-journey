#include <iostream>
using namespace std;

int RandomNumber(int From, int To) {
    // Function to generate a random number
    return rand() % (To - From + 1) + From;
}

int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

void FillArrayWithRandomNumbers(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arr[i] = RandomNumber(1, 100);
    }
}

void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = arr1[i] + arr2[i];
    }
}

void PrintArray(int arr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void generateAndPrintGroup2(int arr2[100], int count) {
    // Generate and print random numbers for the second array
    cout << "\nArray 2 elements:\n";
    for (int i = 0; i < count; ++i) {
        arr2[i] = rand() % 100 + 1;  // Random number between 1 and 100
        cout << arr2[i] << " ";
    }
    cout << endl;
}

int main() {
    // Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr1[100], arr2[100], arrSum[100];
    int arrLength = ReadPositiveNumber("How many elements? ");

    // Fill arrays with random numbers
    FillArrayWithRandomNumbers(arr1, arrLength);
    generateAndPrintGroup2(arr2, arrLength);  // Use the function to fill arr2

    // Calculate the sum of two arrays
    SumOf2Arrays(arr1, arr2, arrSum, arrLength);

    // Print results
    cout << "\nArray 1 elements:\n";
    PrintArray(arr1, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements:\n";
    PrintArray(arrSum, arrLength);

    return 0;
}
