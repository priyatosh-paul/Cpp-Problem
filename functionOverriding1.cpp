// CPP program to illustrate 
// Function Overriding 
#include<iostream> 
using namespace std; 

class BaseClass 
{ 
public: 
	int a;
	short b;
	double c;
	virtual void Display() =0;
	//{ 
		//cout << "\nThis is Display() method"
		//		" of BaseClass"<<__PRETTY_FUNCTION__; 
	//} 
	void Show() 
	{ 
		cout << "\nThis is Show() method "
			"of BaseClass"<<__PRETTY_FUNCTION__; 
	} 
//	virtual void Show1() 
	//{ 
		//cout << "\nThis is Show1() method "
			//"of BaseClass"; 
	//} 
}; 

class DerivedClass : public BaseClass 
{ 
public: 
	// Overriding method - new working of 
	// base class's display method 
	void Display() 
	{ 
		cout << "\nThis is Display() method"
			" of DerivedClass"<<__PRETTY_FUNCTION__; 
	} 
	void Show() 
	{ 
	cout << "\nThis is Show1() method "
			"of DerivedClass"<<__PRETTY_FUNCTION__; 
	}
}; 

// Driver code 
int main() 
{
	cout<< "The size ofBase class is "<<sizeof(BaseClass)<<endl; 
	cout<< "The size of Derived  class is "<<sizeof(DerivedClass)<<endl; 
	DerivedClass dr; 
	BaseClass &bs = dr; 
	BaseClass *bs1 = new DerivedClass;
	bs.Display();
	bs1->Display(); 
	dr.Show(); 
	cout<< "The size of bs reference is "<<sizeof(bs)<<endl;
	cout<< "The size of bs1 pointer is "<<sizeof(bs1)<<endl;
//	dr.Show1();
	//bs.Show1();
} 
