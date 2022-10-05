#include<iostream>
using namespace std;
void sum(int num1,int num2)
{
cout<<endl<<"Sum Is::::"<<num1+num2<<endl;
}
void sum(int num1,float num2)
{
cout<<endl<<"Sum Is::::"<<num1+num2<<endl;
}
void sum(int num1,int num2, int num3)
{
cout<<endl<<"Sum Is:::::"<<num1+num2+num3<<endl;
}
int main(void)
{
sum(100,200); // this will call void sum(int num1,int num2)
sum(100,200.0f); // this will call void sum(int num1,float num2)

sum(100,200,300); // this will call void sum(int num1,int num2, int num3)
return 0;
}
