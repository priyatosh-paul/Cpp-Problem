#include<iostream>
#include<boost/scoped_ptr.hpp>
#include<memory>

using namespace std;
using namespace boost;
class Treal
{
	public:
		int real,img;
		Treal()
		{
			this->real=0;
			this->img=0;
			cout<<endl<<"Inside Parameterless constructor"<<endl;
		}
		Treal(int real,int img)
		{
			this->real=real;
			this->img=img;
			cout<<endl<<"Inside parameterised constructor"<<endl;
		}
		void DisplayOutput(void)
		{
			cout<<endl<<"Real No Is:::"<<this->real<<"\t"<<"Img No Is::::"<<this->img<<endl;
		}

		~Treal()
		{
			cout<<endl<<"Inside Destructor method"<<endl;
		}
};
int main(void)
{
	/*scoped_ptr and unique_ptr are same, it cannot be copied from one location to another, but unique_ptr has a specile 
	 * charcteristic to move the value with address from one location to another location*/
	 
	//scoped_ptr<Treal> ptr(new Treal(100,200));
	unique_ptr<Treal> ptr(new Treal(100,200));
	ptr->DisplayOutput();
	//scoped_ptr<Treal> ptr2(ptr); // ptr conn't be copied into ptr2
	unique_ptr<Treal> ptr2=move(ptr);
	//unique_ptr<Treal> ptr2(ptr);
	ptr2->DisplayOutput();
	
	return 0;
}
