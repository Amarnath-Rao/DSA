#include <iostream>
using namespace std;

class Deque {
private:
    int* arr;        // Array to store deque elements
    int front;       // Index of the front element
    int rear;        // Index of the last element
    int capacity;    // Maximum number of elements deque can hold
    int size;        // Current size of the deque

public:
    // Constructor to initialize the deque
    Deque(int size) {
        arr = new int[size];
        capacity = size;
        front = -1; // Deque starts empty
        rear = 0;
        this->size = 0;
    }

    // Destructor to free allocated memory
    ~Deque() {
        delete[] arr;
    }

    // Add an element at the front
    void addFront(int element) {
        if (isFull()) {
            cout << "Deque overflow! Cannot add " << element << " at front." << endl;
            return;
        }
        front = (front + 1) % capacity; // Circular increment
        arr[front] = element;
        size++;
        cout << "Added at front: " << element << endl;
    }

    // Add an element at the rear
    void addRear(int element) {
        if (isFull()) {
            cout << "Deque overflow! Cannot add " << element << " at rear." << endl;
            return;
        }
        rear = (rear - 1 + capacity) % capacity; // Circular decrement
        arr[rear] = element;
        size++;
        cout << "Added at rear: " << element << endl;
    }

    // Remove an element from the front
    int removeFront() {
        if (isEmpty()) {
            cout << "Deque underflow! Cannot remove from front." << endl;
            return -1; // Return -1 if deque is empty
        }
        int element = arr[front];
        front = (front - 1 + capacity) % capacity; // Circular decrement
        size--;
        return element; // Return the removed element
    }

    // Remove an element from the rear
    int removeRear() {
        if (isEmpty()) {
            cout << "Deque underflow! Cannot remove from rear." << endl;
            return -1; // Return -1 if deque is empty
        }
        int element = arr[rear];
        rear = (rear + 1) % capacity; // Circular increment
        size--;
        return element; // Return the removed element
    }

    // Peek the front element
    int peekFront() {
        if (isEmpty()) {
            cout << "Deque is empty! Cannot peek front." << endl;
            return -1; // Return -1 if deque is empty
        }
        return arr[front]; // Return front element
    }

    // Peek the rear element
    int peekRear() {
        if (isEmpty()) {
            cout << "Deque is empty! Cannot peek rear." << endl;
            return -1; // Return -1 if deque is empty
        }
        return arr[(rear + 1) % capacity]; // Return rear element
    }

    // Check if the deque is empty
    bool isEmpty() {
        return size == 0; // Return true if deque is empty
    }

    // Check if the deque is full
    bool isFull() {
        return size == capacity; // Return true if deque is full
    }

    // Display the deque elements
    void display() {
        if (isEmpty()) {
            cout << "Deque is empty!" << endl;
            return;
        }
        cout << "Deque elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front - i + capacity) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Deque deque(5); // Create a deque of capacity 5

    deque.addRear(10);
    deque.addRear(20);
    deque.addFront(30);
    deque.addFront(40);
    deque.addRear(50);
    deque.addFront(60); // Should show overflow

    deque.display();

    cout << "Front element is: " << deque.peekFront() << endl;
    cout << "Rear element is: " << deque.peekRear() << endl;

    cout << "Removed from front: " << deque.removeFront() << endl;
    cout << "Removed from rear: " << deque.removeRear() << endl;

    deque.display();

    cout << "Is deque empty? " << (deque.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is deque full? " << (deque.isFull() ? "Yes" : "No") << endl;

    return 0;
}
/*
Deque (Double-ended Queue):
push_back(x) – Adds element x to the back.
push_front(x) – Adds element x to the front.
pop_back() – Removes the last element.
pop_front() – Removes the first element.
front() – Returns the first element.
back() – Returns the last element.
empty() – Checks if deque is empty.
size() – Returns the size of deque.
at(index) – Accesses the element at the given index.
*/