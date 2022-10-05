#include<iostream>
using namespace std;
class A
{
	public:
		int a;
		static int count; // Static Variable
		A()
		{
			cout << "I am at Parameterless Constructor "<<endl;
			this->a=0;
			count++;
		}
		A(int a)
		{
			cout << "I am at Parameterized Constructor "<<endl;
			this->a=a;
			count++;
		}
		void DisplayOutput()
		{
			cout << "I am at DisplayOutput "<<endl;
			//this->a=100;
			cout<<endl<<"A:::a==="<<this->a<<"\t"<<"Count Is:::"<<count<<endl;
		}
	/*	static void SetCounter(int counter) // Static Member Function
		{
			cout << "I am at SetCounter "<<endl;
			A::count=counter;
		}*/
		~A()
		{
			cout << "I am at Destructor "<<endl;
		}
};
int A::count=100; // Global Definition Of Static Function
int main(void)
{
//	A::SetCounter(1000);
	A obj(999);
	obj.DisplayOutput();
	//obj.SetCounter(111);
	return 0;
}
