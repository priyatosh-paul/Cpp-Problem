#include<iostream>
using namespace std;

class Treal
{
	
	public:
	int real,img;
	public:
	inline Treal()
	{
		this->real=0;
		this->img=0;
	}
	inline Treal(int real,int img)
	{
		this->real=real;
		this->img=img;
	}
	inline void DisplayOutput()
	{
		cout<<endl<<"Real No Is:::"<<this->real<<"\t"<<"Img No Is:::"<<this->img<<endl;
	}
	inline int getReal()const
	{
		return this->real;
	}

	inline int getImg()const
	{
		return this->img;
	}
};


int main(void)
{
	const Treal obj(100,200);
	cout<<endl<<"Real No Is::::"<<obj.getReal()<<endl;
	cout<<endl<<"Img No Is:::::"<<obj.getImg()<<endl;
	//Treal::DisplayOutput(); // Non constant member function will not be accessible using	constant object
}



