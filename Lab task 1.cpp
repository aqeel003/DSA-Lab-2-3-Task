#include <iostream>
using namespace std;

// Binary Search function
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Target found
        }
        if (arr[mid] > target) {
            high = mid - 1; // Search in the left half
        } else {
            low = mid + 1; // Search in the right half
        }
    }
    return -1; // Target not found
}

// Main function
int main() {
    int arr[6];

    // Input for the array
    for (int i = 0; i < 6; i++) {
        cout << "Enter value of Array at index " << i << ": ";
        cin >> arr[i];
    }

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // Input for the target element to search
    int target;
    cout << "Enter value to be searched: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, size, target);

    // Output the result
    if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0; 
}

