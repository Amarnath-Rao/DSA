#include <iostream>
using namespace std;

// Function to display the array
void display(int arr[], int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Insert an element at a specific position
void insert(int arr[], int &size, int element, int position, int capacity) {
    if (size == capacity) {
        cout << "Array is full, can't insert." << endl;
        return;
    }

    // Shifting elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    size++;
}

// Delete an element from a specific position
void deleteElement(int arr[], int &size, int position) {
    if (position >= size || position < 0) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shifting elements to the left
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    size--;
}

// Search for an element in the array
int search(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;  // Return the index of the element
        }
    }
    return -1;  // Return -1 if not found
}

// Reverse the array
void reverse(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Find the maximum element in the array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Find the minimum element in the array
int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// Sort the array (Bubble Sort)
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    /*
    int mat1[3][3], mat2[3][3]
    vector<vector<int>> mat1(3, vector<int>(3));
    vector<vector<int>> mat2(3, vector<int>(3));
    */
    const int capacity = 10;  // Maximum size of the array
    int arr[capacity] = {1, 2, 3, 4, 5};  // Initial array
    int size = 5;  // Current size of the array

    display(arr, size);

    // Insert operation
    cout << "Inserting 10 at position 2:" << endl;
    insert(arr, size, 10, 2, capacity);
    display(arr, size);

    // Delete operation
    cout << "Deleting element at position 3:" << endl;
    deleteElement(arr, size, 3);
    display(arr, size);

    // Search operation
    int element = 4;
    int index = search(arr, size, element);
    if (index != -1) {
        cout << "Element " << element << " found at index " << index << endl;
    } else {
        cout << "Element " << element << " not found." << endl;
    }

    // Reverse operation
    cout << "Reversing the array:" << endl;
    reverse(arr, size);
    display(arr, size);

    // Finding maximum and minimum
    cout << "Maximum element: " << findMax(arr, size) << endl;
    cout << "Minimum element: " << findMin(arr, size) << endl;

    // Sorting the array
    cout << "Sorting the array:" << endl;
    bubbleSort(arr, size);
    display(arr, size);

    return 0;
}
