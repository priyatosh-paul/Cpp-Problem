#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
	public:
	A()
	{
		cout <<__FUNCTION__<<endl;
		this->a=0;
//		this->b=0;
	}
	A(int a)
	{
		cout <<__FUNCTION__<<endl;
		this->a=a;
		cout<<"a=========="<<this->a<<endl;
	}
	A(int a, int b)
	{
		cout <<__FUNCTION__<<endl;
		this->a=a;
		this->b=b;
		cout<<"a=========="<<this->a<<endl;
	}
	void Display()
	{
		cout <<__FUNCTION__<<endl;
		cout<<"a=========="<<this->a<<endl;
		cout<<"b=========="<<this->b<<endl;
		
		
	}

};
int main()
{
	A(100);
	A()=200;
	A (400,500);
//	A::Display();
	A a;
//	A C=(600,700);
	//A::Display();
A  *ptr;
	ptr->Display();

	return 0;
} 
