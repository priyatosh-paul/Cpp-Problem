#include<iostream>
using namespace std;

class A
{
	private:
		int a;
		char *b;
	public:
		A()
		{
			this->a=0;
			this->b=NULL;
		}
		A(int a, char *b)
		{
			this->a=a;
			this->b= new char;
		}
		void Display()
		{
			cout<<"a========="<<this->a<<endl<<"b==========="<<this->b<<endl;
		}

};


int main()
{
	A a(100,"P");
	A b=a;
	a.Display();
	b.Display();


	return 0;
}


