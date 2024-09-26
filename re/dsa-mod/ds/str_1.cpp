#include <iostream>
#include <cstring> // For strlen, strcpy, etc.

class MyString {
private:
    char* str;   // Pointer to hold the string
    int length;  // Length of the string

public:
    // Constructor
    MyString(const char* input) {
        length = strlen(input);
        str = new char[length + 1]; // Allocate memory
        strcpy(str, input);          // Copy input to str
    }

    // Destructor
    ~MyString() {
        delete[] str; // Free allocated memory
    }

    // Function to concatenate two strings
    MyString concatenate(const MyString& other) {
        char* newStr = new char[length + other.length + 1]; // Allocate new memory
        strcpy(newStr, str); // Copy current string
        strcat(newStr, other.str); // Concatenate with other string
        MyString result(newStr); // Create new MyString object
        delete[] newStr; // Free temporary memory
        return result;
    }

    // Function to extract a substring
    MyString substring(int start, int len) {
        if (start < 0 || start >= length || len <= 0) {
            return MyString(""); // Return empty string if invalid
        }
        if (start + len > length) {
            len = length - start; // Adjust length if it exceeds
        }
        char* subStr = new char[len + 1];
        strncpy(subStr, str + start, len);
        subStr[len] = '\0'; // Null-terminate the substring
        MyString result(subStr);
        delete[] subStr; // Free temporary memory
        return result;
    }

    // Function to search for a character
    int indexOf(char ch) {
        for (int i = 0; i < length; i++) {
            if (str[i] == ch) {
                return i; // Return index of first occurrence
            }
        }
        return -1; // Return -1 if not found
    }

    // Function to reverse the string
    MyString reverse() {
        char* revStr = new char[length + 1];
        for (int i = 0; i < length; i++) {
            revStr[i] = str[length - 1 - i];
        }
        revStr[length] = '\0'; // Null-terminate the reversed string
        MyString result(revStr);
        delete[] revStr; // Free temporary memory
        return result;
    }

    // Function to display the string
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString str1("Hello");
    MyString str2("World");

    std::cout << "String 1: ";
    str1.display();

    std::cout << "String 2: ";
    str2.display();

    // Concatenate
    MyString concatenated = str1.concatenate(str2);
    std::cout << "Concatenated: ";
    concatenated.display();

    // Substring
    MyString subStr = str1.substring(1, 3);
    std::cout << "Substring (1, 3): ";
    subStr.display();

    // Search for character
    char searchChar = 'l';
    int index = str1.indexOf(searchChar);
    if (index != -1) {
        std::cout << "Character '" << searchChar << "' found at index: " << index << std::endl;
    } else {
        std::cout << "Character '" << searchChar << "' not found." << std::endl;
    }

    // Reverse
    MyString reversed = str1.reverse();
    std::cout << "Reversed String 1: ";
    reversed.display();

    return 0;
}
