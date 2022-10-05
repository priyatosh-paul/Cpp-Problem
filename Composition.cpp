#include<iostream>

using namespace std;

class A  
{
	//	private:
	public:
		int a;
		A()
		{
			this->a=0;
		}
		A(int a)
		{
			this -> a;
		}
		void Display()
		{
			cout<<"a==========="<<this->a<<endl;
		}

};

class B
{
	public:
		A _a;
		int b;
		B()
		{
			this->_a.a=0;
			this->b=0;
		}
		B(int a,int b)
		{	this->_a.a=a;
			this->b=b;
		}

		void Display()
		{
			cout<<"a========="<<this->_a.a<<"b=========="<<this->b<<endl;
		}
};

int main()
{
	B _b(100,200);

	_b.Display();

	return 0;
}


