#include<iostream>
using namespace std;


class Base1
{
	public:
		Base1()
		{
			cout<<"I am in base1 function\n"<<endl;
		}

};

class derived1:virtual public Base1
{
	public:
		derived1()
		{
			cout<<"I am in derived1 function\n"<<endl;
		}
};
class derived2: virtual public Base1
{
	public:
		derived2()
		{
			cout<<"I am in derived2 function\n"<<endl;
		}
};

class derived3: virtual public derived1, public derived2
{
	public:
		derived3()
		{
			cout<<"I am in derived3 function\n"<<endl;
		}
};

int main()
{
	derived3 D;
	return 0;
}



