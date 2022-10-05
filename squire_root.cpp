#include<iostream>
using namespace std;
int sqrt32(int number)
{
	int square=1;
	int delta=3;
	while( square <=number)
	{
		square +=delta;
		delta +=2;
	}
	return ((delta/2)-1);
}
int main()
{
	int num;
	cout<<endl<<"Enter the number to find square::::";
	cin>>num;
	cout<<endl<<"Square Root is::::"<<sqrt32(num)<<endl;
	return 0;
}




