#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9, 10}; // 4 is missing
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size - 1; i++) {
        if (arr[i + 1] - arr[i] != 1) {
            cout << "Missing number is: " << arr[i] + 1 << endl;
            break; // only one missing
        }
    }

    return 0;
}
