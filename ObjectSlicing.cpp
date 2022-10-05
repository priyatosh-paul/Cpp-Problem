#include<iostream>
using namespace std;
class Base{
	protected:
		int a,b;
	public:
		Base()
		{
			this->a=0;
			this->b=0;
		}
		Base(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void DisplayOutput()
		{	
			cout<<"I am at Base Class"<<endl;
			cout<<endl<<"A is:::"<<this->a<<"\t"<<"B is:::"<<this->b<<endl;
		}
		~Base()
		{
		}
};
class Derived:public Base
{
	protected:
		int c;
	public:
		Derived()
		{
			this->c=0;
		}
		Derived(int a,int b,int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		void DisplayOutput()
		{

			cout<<"I am at Derived Class"<<endl;
			cout<<endl<<"A Is:::"<<this->a<<"\t"<<"B Is:::"<<this->b<<"\t"<<"C is:::"<<this->c<<endl;
		}
		~Derived()
		{
		}
};
int main(void)
{
	Derived obj1(100,200,300);
	obj1.DisplayOutput();
	Base obj2=obj1; // Object Slicing
	obj2.DisplayOutput();
	return 0;
}
