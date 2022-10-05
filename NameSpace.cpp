#include<iostream>
using namespace std;

namespace NA
{
	int num1 = 10;
}

int main(void)
{
	int num1 = 20;
	using namespace NA;
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num1	:	"<<num1<<endl;
	cout<<"Num1	:	"<<NA :: num1<<endl;
	cout<<"Num1	:	"<<num1<<endl;
	return 0;
}



