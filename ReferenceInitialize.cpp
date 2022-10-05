#include<iostream>
using namespace std;

class CTest
{

    private :
        double & num3;
    public:
        CTest(double & num2):num3(num2)
    {
    }

};

int main(void)
{
    double num1 = 10;
    CTest testInstance(num1);
    size_t size = sizeof(testInstance);
    cout <<"size :   "<<size<<endl;
    return 0;
}

