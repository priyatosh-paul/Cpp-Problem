#include<iostream>
using namespace std;

class  A{
	public:
		int a;
		int b;
		void get(int a, int b) 
				{
				this->a=a;
				this->b=b;

				}
				
		int get_a(void) 
		{
		//	return this->a;
			return a;

		}
		int get_b(void) 
		{
		//	return this->b;
			return b;

		}
		void show() 
		{
		//	cout<<this->a<<endl;
			cout<<a<<endl;

		//	cout<<	this->b<<endl;
			cout<<b<<endl;

		}

};

int main()
{
	A _a={10,20};
	
	cout <<sizeof(_a)<<endl;
	cout <<sizeof(A)<<endl;
	_a.show();
	return 0;
}

