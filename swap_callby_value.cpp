#include<iostream>
using namespace std;
void SWAP(int num1,int num2)
{
int temp;
temp=num1;
num1=num2;
num2=temp;
}
int main(void)
{
int a=200,b=100;
cout<<endl<<"=======Before Swapping======"<<endl;
cout<<endl<<"A Is:::"<<a<<"\t"<<"B Is:::"<<b<<endl;
SWAP(a,b);
cout<<endl<<"=======After Swapping======"<<endl;
cout<<endl<<"A Is:::"<<a<<"\t"<<"B Is:::"<<b<<endl;
return 0;
}
