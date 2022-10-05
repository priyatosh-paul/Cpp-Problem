#include <iostream>
using namespace std;

class foo {
public:
    int i;
    void virtual foobar()
    {
        cout << "foobar\n";
    }
};

int main()
{
    foo f;
    cout << sizeof(f) << endl;
    cout << sizeof(f.i) << endl;
   // cout << sizeof(f.foobar) << endl;
    return 1;
}
