#include<iostream>
using namespace std;

class Base
{
	private:
		int num1;
	public:
		Base(int num)
		{
			this->num1=num;
		}
		void printoutput(void)
		{
			cout<<endl<<"Inside Base::Number Is:::"<<this->num1<<endl;
		}
		virtual void displayoutput1()
		{
			cout<<endl<<"Inside base class displayoutput1 method"<<endl;
		}
		~Base()
		{}
};

class Derived : public Base
{
	private:
		int num2;
	public:
		Derived(int num):Base(num)/*********************Important****************************/
	{
		this->num2=num;
	}
		void printoutput()
		{
			cout<<endl<<"Inside Derived class:::Number is:::"<<this->num2<<endl;
		}
		void displayoutput2()
		{
			cout<<endl<<"Inside derived class displayoutput2 method"<<endl;
		}
		~Derived()
		{}
};
int main(void)
{
	Base *obj1=new Derived(100);
	Derived *obj2=dynamic_cast<Derived*> (obj1);
//	Derived *obj2=static_cast<Derived*>(obj1);
	obj2->displayoutput1();
	obj2->displayoutput2();
	obj2->printoutput();
	return 0;
}


