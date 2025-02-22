#include<iostream>
using namespace std;
int main(void)
{
int *num=NULL;
int size=5;
num=(int*)malloc(sizeof(int)*size);
cout<<"Size of num ::"<<sizeof(num)<<endl;
//system("valgrind a.out");
return 0;
}
