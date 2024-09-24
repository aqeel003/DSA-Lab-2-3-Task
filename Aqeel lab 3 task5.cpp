#include<iostream>
using namespace std;

int main() {
    int numbers[6];
    cout << "Enter 6 integer values: ";
    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }
    bool isPalindrome = true;
    for (int i = 0; i < 3; i++) {
        if (numbers[i] != numbers[5 - i]) {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome) {
        cout << "This is a palindrome" <<endl;
    } else{
        cout << "This is not palindrome"<<endl;
    }
    return 0;
}
