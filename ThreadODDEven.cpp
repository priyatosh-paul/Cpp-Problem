#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex mtx;

void print_even(int limit) {
    for (int i = 0; i <= limit; ++i) {
        if (i % 2 == 0) {
            lock_guard<mutex> lock(mtx);
            cout << "Even: " << i << endl;
        }
    }
}

void print_odd(int limit) {
    for (int i = 0; i <= limit; ++i) {
        if (i % 2 != 0) {
            lock_guard<mutex> lock(mtx);
            cout << "Odd: " << i << endl;
        }
    }
}

int main() {
    int limit = 10;
    
    thread t1(print_even, limit);
    thread t2(print_odd, limit);

    t1.join();
    t2.join();

    return 0;
}
