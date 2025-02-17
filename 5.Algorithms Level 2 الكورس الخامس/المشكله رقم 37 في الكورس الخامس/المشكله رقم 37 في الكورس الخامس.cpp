#include <iostream>
using namespace std;

int randomnumber(int from, int to)
{
    //Function to generate a random number
    int randnum = rand() % (to - from + 1) + from;
    return randnum;

}
void fillarraywithrandomnumbers(int arr[100], int& arrLength)
{
    cout << "\nenter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
        arr[i] = randomnumber(1, 100);
}
void printArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}
void addarrayelement(int number, int arr[100], int& arrLength)
{
    //its a new element so we need to add the length by 1
    arrLength++;
    arr[arrLength - 1] = number;

}
void copyarrayusingaddArrayelement(int arrsource[100], int arrdestination[100], int arrLength, int& arrdestinationLength)
{
    for (int i = 0; i < arrLength; i++)
        addarrayelement(arrsource[i], arrdestination, arrdestinationLength);

}

int main()
{
    //Seeds the random number generator in C++, called only once
    srand((unsigned)time(NULL));

    int arr[100], arrLength = 0, arr2Length = 0;
    fillarraywithrandomnumbers(arr, arrLength);
    int arr2[100];

    copyarrayusingaddArrayelement(arr, arr2, arrLength, arr2Length);
    cout << "\nArray 1 elements:\n";
    printArray(arr, arrLength);

    cout << "\nArray 2 elements after copy:\n";
    printArray(arr, arrLength);
    return 0;

}
