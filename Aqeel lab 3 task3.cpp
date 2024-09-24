#include<iostream>
using namespace std;

int main() {
    int n = 5;
    int numbers[6] = {10, 20, 30, 40, 50};
    int Element, posi;

    cout << "Enter the new element: ";
    cin >> Element;

    cout << "Enter the position (0 to 4): ";
    cin >> posi;

    for (int i = n; i > posi; i--) {
        numbers[i] = numbers[i - 1];
    }

    numbers[posi] = Element;
    n++;

    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}
