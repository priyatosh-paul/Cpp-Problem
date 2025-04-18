#include <iostream>
#include <cstring>   // for strlen, isalpha
using namespace std;

int main() {
    char arr[] = "Priya#tosh@123";

    int len = strlen(arr);
    char temp[len + 1];  // +1 for null terminator
    int j = 0;  // write index

    for (int i = 0; i < len; i++) {
        if (isalpha(arr[i])) {
            temp[j++] = arr[i];
        }
    }

    temp[j] = '\0';  // null terminate
    strcpy(arr, temp);  // copy back to original

    cout << "Cleaned string: " << arr << endl;

    return 0;
}
