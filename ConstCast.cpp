#include<iostream>
using namespace std;
void function(const int *num)
{
int *temp=const_cast<int *>(num);
*temp=500;
}
int main(void)
{
int a=100;
cout<<endl<<"Before Modification Number Is:::"<<a<<endl;
function(&a);
cout<<endl<<"After Modification Number Is:::::"<<a<<endl;
return 0;
}


