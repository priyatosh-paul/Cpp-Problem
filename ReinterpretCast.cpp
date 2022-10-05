#include<iostream>
using namespace std;
class Base
{
private:
int a,b;
public:
Base()
{
this->a=0;
this->b=0;
}
Base(int a,int b)
{
this->a=a;this->b=b;
}
void DisplayOutput()
{
cout<<endl<<"A is:::"<<this->a<<"\t"<<"B is:::"<<this->b<<endl;
}
~Base()
{
}
};
int main(void)
{
Base obj(100,200);
obj.DisplayOutput();
int *ptr=reinterpret_cast<int *>(&obj);
cout<<endl<<"A Is:::"<<*ptr<<endl;
ptr++;
cout<<endl<<"B is:::"<<*ptr<<endl;
return 0;
}



