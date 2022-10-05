#include<iostream>
#include<string>
using namespace std;

template <class T>

class Type
{
	T *first, second;
	Type()
	{
		first=NULL;
		second=0;
	}
	Type(T *a, T b)
	{
		first=a;
		second=b;
	}
	
	Type (const Type &other)
	{
		first= new T ;
		second = other.b;
		for( int i =0; i < second; ++i)
			first[i]=other.first[i];
			
	}
	void Display()
	{
		cout<<"first"<<first;
		cout<< "second"<< second;;
	}

};

int main()
{
	Type< string, int> _t("hello", 10);
	_t.Display();
	
	return 0;
}
