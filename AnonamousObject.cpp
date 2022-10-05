#include<iostream>
using namespace std;
class A
{
	int a;
	public:
	A()
	{
		this->a=0;
	}
	A(int a)
	{
		this->a=a;
		cout<<"a=========="<<this->a<<endl;
	}
	void Display()
	{
		cout<<"a=========="<<this->a<<endl;
	}

};
int main()
{
	A(100);
	//A::Display();
//A  *ptr;
	//ptr->Display();

	return 0;
} 
