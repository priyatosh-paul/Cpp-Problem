#include<iostream>
//#include"Sally.h"

using namespace std;
class Sally
{
	public:
		int num;
		//Sally()
		Sally()
		{
		}
		Sally(int a)
		{
			num = a;
		}
		//Sally operator+(Sally);
		Sally operator+(Sally &other)
		{
			Sally brandNew;
			brandNew.num = num + other.num;
			return (brandNew);
		}

};

int main()
{
	Sally a(32);
	Sally b(21);
	Sally c;
	c = a+b;
//	c.num = a.add(b);
	cout<< c.num <<endl; 

	return 0;
}

