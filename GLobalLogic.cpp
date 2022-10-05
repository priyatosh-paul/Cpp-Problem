#include <iostream>

using namespace std;

template <class T>
class C {
public:
    void method() const {
        cout << __PRETTY_FUNCTION__ << " " << __LINE__ << endl;
    }
    
    void method() {
        cout << __PRETTY_FUNCTION__ << ": " << __LINE__ << endl;
    }
private:
    T t_ = 0;
};

int main()
{   
    const C<int> * p_int1 = new C<int>();
    p_int1->method();
    delete p_int1;
    
    C<int> const * p_int2 = new C<int>();
    p_int2->method();
    delete p_int2;

    C<int> * const p_int3 = new C<int>();
    p_int3->method();
    delete p_int3;
    
    const C<int> * const p_int4 = new C<int>();
    p_int4->method();
    delete p_int4;
    
    C<float> c_float;
    c_float.method();

    return 0;
}



