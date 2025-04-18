#include <iostream>
using namespace std;

class A {
private:
    int a;
    int *ptr;

public:
    // Default Constructor
    A() : a(0), ptr(nullptr) {
        cout << "Default Constructor" << endl;
    }

    // Parameterized Constructor
    A(int size) : a(size) {
        ptr = new int[a];
        for (int i = 0; i < a; i++)
            ptr[i] = i + 1; // Initialize with some values
        cout << "Parameterized Constructor" << endl;
    }

    // Copy Constructor (deep copy)
    A(const A &other) : a(other.a) {
        ptr = new int[a];
        for (int i = 0; i < a; i++)
            ptr[i] = other.ptr[i];
        cout << "Copy Constructor" << endl;
    }

    // Copy Assignment Operator
    A& operator=(const A &other) {
        cout << "Copy Assignment Operator" << endl;
        if (this == &other) return *this;

        delete[] ptr;  // clean existing memory
        a = other.a;
        ptr = new int[a];
        for (int i = 0; i < a; i++)
            ptr[i] = other.ptr[i];

        return *this;
    }

    // Move Constructor
    A(A &&other) noexcept : a(other.a), ptr(other.ptr) {
        cout << "Move Constructor" << endl;
        other.ptr = nullptr;
        other.a = 0;
    }

    // Destructor
    ~A() {
        delete[] ptr;
        cout << "Destructor" << endl;
    }
};

int main() {
    A obj(5);        // Parameterized Constructor
    A obj1 = obj;    // Copy Constructor
    A obj2;          // Default Constructor
    obj2 = obj;      // Copy Assignment Operator
    A obj3 = std::move(obj2); // Move Constructor
    return 0;
}
