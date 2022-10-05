#include<iostream>
using namespace std;
int main(void)
{
int a=100;
int &r=a;
cout<<endl<<"a is:::"<<a<<"&r is:::"<<r<<endl;
cout<<endl<<"address of a is:::"<<&a<<"\t"<<"address of &r is:::"<<&r<<endl;
a=200;
cout<<endl<<"a is:::"<<a<<"&r is:::"<<r<<endl;
cout<<endl<<"address of a is:::"<<&a<<"\t"<<"address of &r is:::"<<&r<<endl;

return 0;
}
