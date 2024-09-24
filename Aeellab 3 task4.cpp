#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int numbers[5] = {10, 20, 30, 40, 50};
    int position;
    cout << "Enter the position (0 to 4): ";
    cin >> position;
    for (int i = position; i < n-1; i++) {
        numbers[i] = numbers[i+1];
    }
    n--;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}
