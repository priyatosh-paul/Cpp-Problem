#include<iostream>
using namespace std;


class mystring {
    private:
        char* c;
        int lnth, capacity;
    public:
        mystring();
        ~mystring();
        bool append(char x);
};

mystring::mystring() {
    capacity = INITIAL_LENGTH;
    c = new char[capacity];
    lnth = 0;
}

bool mystring::append(char x) {
    char* temp;
    if (lnth >= capacity) {
        temp = new char[2*capacity];
        for (int i=0; i<capacity; i++) {
            temp[i] = c[i];
        }
        capacity *= 2;
        delete [] c;
        c = temp;
    }
    c[lnth] = x;
    lnth++;
    return true;
}

mystring::~mystring() {
    if (c) delete [] c;
}

int main()
{
    mystring ms(10);
    ms.append("ABC");

    return 0;
}
