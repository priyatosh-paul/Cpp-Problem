/*WRONG
*/
#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		A()
		{
			this->a=0;
		}
		A(int a)
		{
			this->a=a;
		}
		void DisplayOutput()
		{
			cout<<endl<<"A:::a==="<<this->a<<endl;
		}
		~ A()
		{
		}
};
class B: public A
{
	public:
		int b;
		B()
		{
			this->b=0;
		}
		B(int a,int b)
		{
			this->a=a;
			this->b=b;
		}
		void DisplayOutput()
		{
			cout<<endl<<"B:::a==="<<this->a<<"\t"<<"B::::b===="<<this->b<<endl;
		}
		~ B()
		{
		}

};
class C: public A
{
	public:
		int c;
		C()
		{
			this->c=0;
		}
		C(int a,int c)
		{
			this->a=0;
			this->c=0;
		}
		void DisplayOutput()
		{
			cout<<endl<<"C:::a==="<<this->a<<"\t"<<"C:::c===="<<this->c<<endl;
		}
		~ C()
		{
		}
};
class D:virtual public B, virtual public C
{
	public:
		int d;
		D()
		{
			this->d=0;
		}
		D(int a,int b,int c,int d)
		{
			this->B::a=a;
			//this->C::a=a;

			//this->a =a;
			this->b=b;
			this->c=c;
			this->d=d;
		}
		void DisplayOutput()
		{
			cout<<endl<<"D:::a==="<<this->B::a<<"\t"<<"D:::b==="<<this->b<<"\t"<<"D:::c===="<<this->c<<"\t"<<"D:::d==="<<this->d<<endl;
		}
		~ D()
		{
		}
};

int main(void)
{
	D obj(100,200,300,400);
	obj.DisplayOutput();
	obj.B::a=999;
	obj.DisplayOutput();
	return 0;
}







