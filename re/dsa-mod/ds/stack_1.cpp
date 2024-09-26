#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;       // Array to store stack elements
    int top;        // Index of the top element
    int capacity;   // Maximum number of elements stack can hold

public:
    // Constructor to initialize the stack
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;  // Stack is initially empty
    }

    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }

    // Push operation
    void push(int element) {
        if (top == capacity - 1) {
            cout << "Stack overflow! Cannot push " << element << endl;
            return;
        }
        arr[++top] = element; // Increment top and add element
        cout << "Pushed: " << element << endl;
    }

    // Pop operation
    int pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop." << endl;
            return -1; // Return -1 if stack is empty
        }
        return arr[top--]; // Return top element and decrement top
    }

    // Peek operation
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty! Cannot peek." << endl;
            return -1; // Return -1 if stack is empty
        }
        return arr[top]; // Return top element
    }

    // Check if the stack is empty
    bool isEmpty() {
        return top == -1; // Return true if stack is empty
    }

    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1; // Return true if stack is full
    }

    // Display the stack elements
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack(5); // Create a stack of capacity 5

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60); // Should show overflow

    stack.display();

    cout << "Top element is: " << stack.peek() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    stack.display();

    cout << "Is stack empty? " << (stack.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is stack full? " << (stack.isFull() ? "Yes" : "No") << endl;

    return 0;
}
