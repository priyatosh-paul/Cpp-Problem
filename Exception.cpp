#include<iostream>
using namespace std;
int main(void)
{
	int num1=100, num2=0;
	try
	{

		if(num2==0)
		{
			cout<<endl<<"num2 can't be zero"<<endl;
			throw num2;
		}
	}
	catch(int a) // Integer Catch Block
	{
		cout<<endl<<"Catch Exception"<<endl;
	}
	catch(...)// Generic Catch Block
	{
		cout<<endl<<"Catch the Exception"<<endl;
	}
	return 0;
}


