#include<iostream>
using namespace std;

class CTest
{
    private :
        const int _num1;
        const int _num2;
        mutable int _count;

    public:
        CTest (const int num1 = 0, const int num2 = 0): _num1(num1), _num2(num2)
    {
        this-> _count = 0;
    }

        void Print(void) const
        {
            this-> _count = this-> _count + 1;
            cout << "Count :    "<< this-> _count << endl;
            cout << "Num1 :    "<< this-> _num1 << endl;
            cout << "Num2 :    "<< this-> _num2 << endl;

        }

};

int main(void)
{
    CTest testInstance;
    testInstance.Print();
    testInstance.Print();
    return 0;
}



