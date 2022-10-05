#include<iostream> 
using namespace std; 

class Base 
{ 
public: 
	virtual void show()
//	void show() 
	{ cout<<" In Base \n"; } //if we don't give virtual keyword it will prinr base function, i.e it is used for override he base function , i.e called function overirdind, and runtime polymofism
}; 

class Derived: public Base 
{ 
public: 
	
//	virtual void show()
	void show() 
	{ cout<<"In Derived \n"; } 
}; 

int main(void) 
{ 
	Base *bp = new Derived; 
	bp->show(); // RUN-TIME POLYMORPHISM 
	return 0; 
} 



