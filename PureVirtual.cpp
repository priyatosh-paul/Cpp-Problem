#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
class base
{
public:
base(){cout<<"Base Constructor Called\n";}
virtual ~base()=0;
};
base::~base()
{
cout<<endl<<"Inside Pure Virtual Destructor"<<endl;
}
class derived1:public base
{
public:
derived1(){cout<<"Derived constructor called\n";}
~derived1(){cout<<"Derived destructor called\n";}
};
int main()
{
base* b;
b=new derived1;
delete b;
}
