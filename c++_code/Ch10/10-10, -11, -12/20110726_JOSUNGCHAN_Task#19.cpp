#include <iostream>
using namespace std;


int* allocArray(int size){
    int *temp;
    temp = new int[size];
    return temp;
}
void printArray(const int* array, int size){
    cout << "Array elemets are: ";
    for (int i=0; i<size; i++)
    {
        cout << *(array+i) << " ";
    }
}

void freeArray(int* array){
    delete [] array;
    array = NULL;
}

int main()
{
    int* arr;
    int size;
    cout << "Enter the array size: ";
    cin >> size;
    arr = allocArray(size);
    for (int i=0; i<size; i++)
    {
        cout << "Put an array element: ";
        cin >> arr[i];
    }
    printArray(arr,size);
    freeArray(arr);
    return 0;
}