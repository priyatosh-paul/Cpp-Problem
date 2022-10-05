#include<iostream>
using namespace std;
class Base
{
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
		virtual void DisplayOutput()
		{
			cout<<endl<<"A is:::"<<this->a<<"\t"<<"B is:::"<<this->b<<endl;
		}
		virtual ~Base()
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
			this->c=c;}
		void DisplayOutput()
		{
			cout<<endl<<"A Is:::"<<this->a<<"\t"<<"B Is:::"<<this->b<<"\t"<<"C is:::"<<this->c<<endl;
		}
		~Derived()
		{
		}
};
int main(void)
{
	Derived obj(100,200,300);
	obj.DisplayOutput();
	Base *ptr=dynamic_cast<Base *>(&obj);
//	Base *ptr=static_cast<Base *>(&obj);
	ptr->DisplayOutput();
	return 0;
}



