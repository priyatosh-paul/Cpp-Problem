#include<iostream>
using namespace std;

class  A{
	public:
		int a;
		//int b;
		/*		void get(int a, int b) 
				{
				this->a=a;
				this->b=b;

				}
				*/
		int get_a(void) 
		{
		//	return this->a;
			return a;

		}
		//int get_b(void) 
	//	{
		//	return this->b;
		//	return b;

		//}
		void show() 
		{
		//	cout<<this->a<<endl;
			cout<<a<<endl;

		//	cout<<	this->b<<endl;
			//cout<<b<<endl;

		}

};

int main()
{
	cout<< "The size of class A is "<<sizeof(A)<<endl;
	cout<< "The size of int is "<<sizeof(int)<<endl;
	A _a={10/*,20*/};
	cout<< "The size of class A is "<<sizeof(_a)<<endl;
	_a.show();
    cout<<__cplusplus<<endl;
	return 0;
}

