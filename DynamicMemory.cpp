#include<iostream>
using namespace std;
int main(void)
{
int *num=NULL;
num=(int*)malloc(sizeof(int)*10);
*num=200;
cout << "num =="<<*num<<endl;
cout <<"size of num "<<sizeof(num)<<endl;
free(num);
return 0;
}
