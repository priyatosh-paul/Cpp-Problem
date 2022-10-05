#include<iostream>
using namespace std;
class A
{
	int a;
	
	A()
	{
		this->a=0;
	}
	A(int a)
	{
		this->a=a;
		cout<<"a=========="<<this->a<<endl;
	}
	public:
	void Display()
	{
		
		cout<<"a=========="<<this->a<<endl;
	}
	friend class B;
};

	class B
{
	public:
	B()
	{
		A _A;
	}
/*	void Display()
	{
	
		cout<<"a=========="<<_A.this->a<<endl;
	}
*/

};
int main()
{
	//A(100);
	//	A::Display();
A  *ptr;
	B _B;
//	_B.Display();

	return 0;
}



