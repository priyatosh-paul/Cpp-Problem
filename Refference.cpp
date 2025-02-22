#include <iostream>

using namespace std;

class A {
private:
    int &a;        // Reference to int
    char *p;       // Pointer to char
    
public:
    // Constructor that takes an int and initializes reference member
    A(int b) : a(b), p(nullptr) {
        cout << "Constructor called with b = " << b << endl;
    }
    
    // Copy constructor (shallow copy for now, assuming shallow copy for `p`)
    A(const A &other) : a(other.a), p(other.p) {
        cout << "Copy constructor called" << endl;
    }
    
    // Destructor
    ~A() {
        // If we allocated memory dynamically for `p`, we would delete it here.
    }
};

int main() {
    int x = 10;  // Create an integer to be used as reference
    
    // Create an object of type A, passing a reference to x
    A obj1(x);
    
    // Create a pointer to the object
    A *bptr = &obj1;
    
    // Create another pointer and assign it the value of bptr
    A *aptr = bptr;
    
    // Demonstrate object usage through pointers (optional)
    cout << "aptr and bptr point to the same object." << endl;
    
    return 0;
}
