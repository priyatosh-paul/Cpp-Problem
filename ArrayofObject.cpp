#include<iostream>
using namespace std;
class A
{
	private:
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
		void Show()
		{
			cout<<"a=============="<<this->a<<endl;
		}
		~A()
		{
		}
};
int main()
{
	A _A[5]={(10),(20),(60),(30),(50)};
	for(int i=0;i<5;++i)
	_A[i].Show();
	return 0;
}
