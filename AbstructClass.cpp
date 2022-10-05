#include<iostream>

using namespace std;
class A
{
//	protected:
	public:
		int a;
	public:
		A()
		{
			this->a=0;

		}
			A(int a)
		{
			this->a=a;
		}
	virtual	void Display()=0;
		
		

};

class B:public A
{
//	protected:
	public:
		int b;
//	public:
		B()
		{
			this->b=0;

		}
		B(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void Dispalay()
		{
			cout<<"a==========="<<this->a<<endl<<"b=============="<<this->b<<endl;
		}
		
		

};

int main()
{
	A *a=new B;
	a(100,200);
	a->Display();
	cout << __cplusplus<<endl;
	return 0;
}



