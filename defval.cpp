#include<iostream>
using namespace std;

int sum(int num1, int num2)
{
	return num1+num2;
}

float sum(int num1 = 20, int num2 = 23, int num3 = 37)
{
	return num1+num2 + num3;
}
double sum(int num1=34, int num2=4, int num3=2, int num4=23)
{
	return num1+num2+num3+num4;
}

//long int sum(int num1, int num2, int num3, int num4, int num5=10)
//{
//	return num1+num2+num3+num4+num5;
//}



int main(void)
{
	int result=0;
	result=sum(10,20);
    cout<<result<<endl;
	result=sum(10,20,30);
	cout<<result<<endl;
	result=sum(10,20,30, 40);
	cout<<result<<endl;
	//result=sum(10,20,30,40);
//cout<<result<<endl;
	return 0;
}

