#include <iostream>
#include <cstring>  // For strcpy and strlen

using namespace std;

class customstr {
private:
    char *str;

public:
    // Constructor
    customstr(const char *inputStr) {
        if (inputStr) {
            str = new char[strlen(inputStr) + 1];  // Allocate memory
            strcpy(str, inputStr);  // Copy string content
        } else {
            str = nullptr;
        }
    }

    // Copy Constructor (Deep Copy)
    customstr(const customstr &other) {
        if (other.str) {
            str = new char[strlen(other.str) + 1];  // Allocate memory
            strcpy(str, other.str);  // Copy content
        } else {
            str = nullptr;
        }
    }

    // Assignment Operator (Deep Copy)
    customstr& operator=(const customstr &other) {
        if (this == &other) {
            return *this;  // Avoid self-assignment
        }

        // Free existing memory
        delete[] str;

        // Allocate new memory and copy content
        if (other.str) {
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        } else {
            str = nullptr;
        }

        return *this;
    }

    // Destructor (to free memory)
    ~customstr() {
        delete[] str;
    }

    // Function to display the string
    void display() const {
        if (str)
            cout << str << endl;
        else
            cout << "Null string" << endl;
    }
};

int main() {
    customstr cst1("ABC");
    customstr cst2("XYZ");

    cout << "Before Assignment:" << endl;
    cst1.display();  // ABC
    cst2.display();  // XYZ

    cst2 = cst1;  // Deep copy

    cout << "After Assignment:" << endl;
    cst1.display();  // ABC
    cst2.display();  // ABC

    return 0;
}
