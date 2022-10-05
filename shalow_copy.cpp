#include<iostream>
using namespace std;
class Tarray{
public:
int size;
int *ptr;
Tarray();
Tarray(int size);
};
Tarray::Tarray()
{
this->size=0;
this->ptr=NULL;
}
Tarray::Tarray(int size)
{
this->size=size;
this->ptr=new int[this->size];
cout<<"shalow copy"<<endl;
}
int main(void)
{
Tarray a(5);
Tarray b=a; // Shallow copy will be created since class shallow copy will be created since class doesn't have copy constructor
return 0;
}
