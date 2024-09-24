#include <iostream>
#include <string>
#include <algorithm> // For std::sort in the phone book application

// Rotated Binary Search
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int findPivot(int arr[], int left, int right) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid < right && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        if (mid > left && arr[mid] < arr[mid - 1]) {
            return mid - 1;
        }
        if (arr[left] >= arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
}

int rotatedBinarySearch(int arr[], int n, int target) {
    int pivot = findPivot(arr, 0, n - 1);
    if (pivot == -1) {
        return binarySearch(arr, 0, n - 1, target);
    }
    if (arr[pivot] == target) {
        return pivot;
    }
    if (arr[0] <= target) {
        return binarySearch(arr, 0, pivot, target);
    }
    return binarySearch(arr, pivot + 1, n - 1, target);
}

// Recursive Binary Search
int recursiveBinarySearch(int arr[], int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, mid + 1, right, target);
    } else {
        return recursiveBinarySearch(arr, left, mid - 1, target);
    }
}

// Phone Book Application
void linearSearch(const std::string names[], int size, const std::string& target) {
    for (int i = 0; i < size; ++i) {
        if (names[i] == target) {
            std::cout << "Found " << target << " at index " << i << " using linear search." << std::endl;
            return;
        }
    }
    std::cout << target << " not found using linear search." << std::endl;
}

int binarySearchNames(const std::string names[], int left, int right, const std::string& target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (names[mid] == target) {
            return mid;
        } else if (names[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

void phoneBookApplication() {
    const int size = 5;
    std::string names[size];
    std::cout << "Enter 5 names for the phone book:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> names[i];
    }

    std::string searchName;
    std::cout << "Enter the name to search: ";
    std::cin >> searchName;

    // Linear Search
    linearSearch(names, size, searchName);

    // Binary Search (requires sorted array)
    std::string sortedNames[size];
    std::copy(names, names + size, sortedNames);
    std::sort(sortedNames, sortedNames + size);
    int result = binarySearchNames(sortedNames, 0, size - 1, searchName);
    if (result != -1) {
        std::cout << "Found " << searchName << " at index " << result << " using binary search." << std::endl;
    } else {
        std::cout << searchName << " not found using binary search." << std::endl;
    }
}

int main() {
    // Rotated Binary Search
    int n;
    std::cout << "Enter the number of elements in the rotated array: ";
    std::cin >> n;
    
    int* rotatedArr = new int[n];
    std::cout << "Enter the elements of the rotated array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> rotatedArr[i];
    }

    int target;
    std::cout << "Enter the target element to search: ";
    std::cin >> target;

    int result = rotatedBinarySearch(rotatedArr, n, target);
    std::cout << "Rotated Binary Search: Index of " << target << " is " << result << std::endl;

    delete[] rotatedArr;

    // Recursive Binary Search
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    int* arr = new int[n];
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the target element to search: ";
    std::cin >> target;

    result = recursiveBinarySearch(arr, 0, n - 1, target);
    std::cout << "Recursive Binary Search: Index of " << target << " is " << result << std::endl;

    delete[] arr;

    // Phone Book Application
    phoneBookApplication();

    return 0;
}

