#include<iostream>
using namespace std;
void sum(int num1,int num2,int num3=300)
{
cout<<endl<<"Result Is:::"<<num1+num2+num3<<endl;
}
int main(void)
{
sum(1000,2000,3000);
sum(100,200);
return 0;
}
