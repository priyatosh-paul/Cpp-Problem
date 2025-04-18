#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called" << endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) {
        cout << "Copy constructor called" << endl;
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept {
        cout << "Move constructor called" << endl;
    }

    // Copy assignment operator
    MyClass& operator=(const MyClass& other) {
        cout << "Copy assignment operator called" << endl;
        return *this;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        cout << "Move assignment operator called" << endl;
        return *this;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    MyClass obj1;               // Default constructor
    MyClass obj2 = obj1;        // Copy constructor
    MyClass obj3 = std::move(obj1);  // Move constructor
    MyClass obj4;
    obj4 = obj2;                // Copy assignment
    obj4 = std::move(obj2);     // Move assignment

    return 0;
}
