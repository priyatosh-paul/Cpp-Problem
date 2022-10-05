#include<iostream>
using namespace std;
class A
{
	private:
		int _x;
		int _y;
		int _z;
		
	public:
		//A(void): _z(_y), _y(_x), _x(10)
		inline A(): _x(10), _y(_x),_z(_y) 
		{
		}
		void Display()
		{
			cout <<"_x==========="<<_x<<endl;
			cout <<"_y==========="<<_y<<endl;
			cout <<"_z==========="<<_z<<endl;
		}
};

int main(void)
{
	A _a;
	_a.Display();
	return 0;
}
	
		




