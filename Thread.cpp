#include <iostream>
#include <thread>

void printMessage() {
    std::cout << "Hello from thread\n";
}

int main() {
    std::thread t(printMessage);
    t.join();
    return 0;
}
