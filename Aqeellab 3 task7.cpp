#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int[size];
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int key;
    cout << "Enter the key value to search for: ";
    cin >> key;
    int foundIndex = -1;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
        {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1)
    {
        cout << "Value found at index " << foundIndex << endl;
    } else
    {
        cout << "Value not found" << endl;
    }
    delete[] array;
    return 0;
}
