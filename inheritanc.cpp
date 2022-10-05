
#include<iostream>
using namespace std;

class base
{
	public:
	//	void fun(void)
		void  fun(int a)
		{
			cout << "I am at base class"<<endl;
		}
};

class derived : public base{
	public:
//using base::fun;		//	fun(1)
		void fun(char c)
		{
			cout<<"I am at derived class"<<endl;
		}
};

int main()
{
	derived d;
	d.fun(1);
	d.base::fun(1);
	d.fun('A');
	return 0;
}



