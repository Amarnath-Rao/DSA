#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;        // Array to store queue elements
    int front;       // Index of the front element
    int rear;        // Index of the last element
    int capacity;    // Maximum number of elements queue can hold
    int size;        // Current size of the queue

public:
    // Constructor to initialize the queue
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1; // Rear starts at -1
        this->size = 0;
    }

    // Destructor to free allocated memory
    ~Queue() {
        delete[] arr;
    }

    // Enqueue operation
    void enqueue(int element) {
        if (isFull()) {
            cout << "Queue overflow! Cannot enqueue " << element << endl;
            return;
        }
        rear = (rear + 1) % capacity; // Circular increment
        arr[rear] = element;
        size++;
        cout << "Enqueued: " << element << endl;
    }

    // Dequeue operation
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow! Cannot dequeue." << endl;
            return -1; // Return -1 if queue is empty
        }
        int element = arr[front];
        front = (front + 1) % capacity; // Circular increment
        size--;
        return element; // Return the dequeued element
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty! Cannot peek." << endl;
            return -1; // Return -1 if queue is empty
        }
        return arr[front]; // Return front element
    }

    // Check if the queue is empty
    bool isEmpty() {
        return size == 0; // Return true if queue is empty
    }

    // Check if the queue is full
    bool isFull() {
        return size == capacity; // Return true if queue is full
    }

    // Display the queue elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue queue(5); // Create a queue of capacity 5

    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    queue.enqueue(40);
    queue.enqueue(50);
    queue.enqueue(60); // Should show overflow

    queue.display();

    cout << "Front element is: " << queue.peek() << endl;

    cout << "Dequeued element: " << queue.dequeue() << endl;
    cout << "Dequeued element: " << queue.dequeue() << endl;

    queue.display();

    cout << "Is queue empty? " << (queue.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is queue full? " << (queue.isFull() ? "Yes" : "No") << endl;

    return 0;
}
/*
Queue:
push(x) – Adds element x to the queue.
pop() – Removes the front element.
front() – Returns the front element.
back() – Returns the last element.
empty() – Checks if the queue is empty.
size() – Returns the size of the queue.
*/