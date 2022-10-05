#include<iostream>
using namespace std;
int main()
{
	int num;
	int count=2;
	cout<<endl<<"Enter the Number:::";
	cin>>num;
	for(;count<=num-1;count++)
	{
		if(num % count ==0)
		{
			cout<<endl<<"Entered Number Is Not Prime Number"<<endl;
			break;
		}
	}
	if(num==count)
	{
		cout<<endl<<"Entered Number Is Prime Number"<<endl;
	}
}




