#include<iostream>
using namespace std;

class Treal
{
public:
int _real,_img;
Treal()
{
this->_img=0;
this->_real=0;
}
Treal(int real,int img)
{
this->_real=real;
this->_img=img;
}
void DisplayOutput(void)
{
cout<<endl<<"Real No Is:::"<<this->_real<<"\t"<<"Img No Is:::"<<this->_img<<endl;
}
inline void SetRealNumber(int number)// Mutator
{
this->_real=number;
}

inline int GetRealNumber() // Inspector
{
 return this->_real;
}
};
int main(void)
{
Treal obj(100,200);
obj.DisplayOutput();
obj.SetRealNumber(999);
obj.GetRealNumber();
obj.DisplayOutput();
return 0;
}
