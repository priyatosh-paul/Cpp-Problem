#include<iostream>

using namespace std;
class A
{
	protected:
		int a,b;
	public:
		A()
		{
			this->a=0
			this->b=0;
		}
		A(int a, int b)
		{
			this->a=a;
			this->b=b;
		}
		virtual void Display()
		{
			cout<<"I am at base";
		}
};

class B:public A
{
	int c;
	public:
		B()
		{
			this->c=0
			//this-=0;
		}
		B(int c)
		{
			this->c=c;
			//this->b=b;
		}
		void Display()
		{
			cout<< "I am derived";
		}
};



int main()
{	
	A *ptr = new B;
	B *ptr1=dynamic_cast<B*>&ptr;
	ptr1->Display();
	
	
	return 0;
}
