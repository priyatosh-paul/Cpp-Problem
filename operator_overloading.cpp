#include<iostream>
#include"Sally.h"

using namespace std;

int main()
{
	Sally a(32);
	Sally b(21);
	Sally c;
	c = a + b;
//	c.num = a.add(b);
	cout<< c.num <<endl; 

	return 0;
}

