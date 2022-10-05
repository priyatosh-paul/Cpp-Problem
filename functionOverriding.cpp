// CPP program to illustrate 
// Function Overriding 
#include<iostream> 
using namespace std; 

class BaseClass 
{ 
public: 
	virtual void Display() 
	{ 
		cout << "\nThis is Display() method"
				" of BaseClass"; 
	} 
	void Show() 
	{ 
		cout << "\nThis is Show() method "
			"of BaseClass"; 
	} 
}; 

class DerivedClass : public BaseClass 
{ 
public: 
	// Overriding method - new working of 
	// base class's display method 
	void Display() 
	{ 
		cout << "\nThis is Display() method"
			" of DerivedClass"; 
	 }
}; 

// Driver code 
int main() 
{	
//	cout<< "The size ofBase class is "<<sizeof(BaseClass)<<endl; 
//	cout<< "The size of Derived  class is "<<sizeof(DerivedClass)<<endl; 
	DerivedClass dr; 
	BaseClass *bs = &dr; 
	//BaseClass bs;
	//DerivedClass *dr=bs;
	bs->Display();
	//dr.Display(); 
	dr.Show();
       return 0;	
 

}
