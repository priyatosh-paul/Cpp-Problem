#include<iostream>
//#include<boost/shared_ptr.hpp>
#include<memory>
using namespace std;
//using namespace boost;
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
	std::shared_ptr<Treal> ptr(new Treal(100,200));
	ptr->DisplayOutput();
	std::shared_ptr<Treal> ptr2(ptr); 
	ptr2->DisplayOutput();
	return 0;
}
