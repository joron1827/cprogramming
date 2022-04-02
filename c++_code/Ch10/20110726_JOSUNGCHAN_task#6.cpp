#include <iostream>
using namespace std;

void fillArray(int array[], int size);
void printArray(int array[], int size);

int main()
{
    const int ARRAY_SIZE = 5;
    int arr[ARRAY_SIZE];

    fillArray(arr, ARRAY_SIZE);
    printArray(arr, ARRAY_SIZE);

    return 0;
}

void fillArray(int array[], int size){
    cout << "Put array elements: ";
    for (int i =0; i < size; i++){
        cin >> array[i];
    }
}

 void printArray(int array[], int size){
    cout << "Array elements are " ;
    for ( int i =0; i < size; i ++){
        cout << array[i] << " ";
    }
}