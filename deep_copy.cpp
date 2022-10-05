#include<iostream>
using namespace std;
class Tarray
{
public:
int size;
int *ptr;
Tarray();
Tarray(int size);
Tarray(const Tarray &other);
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
}
Tarray::Tarray(const Tarray &other)
{
this->size=other.size;
this->ptr=new int[this->size];
for(int i=0;i< this->size;i++)
{
this->ptr[i]=other.ptr[i];
cout <<"Deep Copy"<<endl;
}
}
int main(void)
{
Tarray a(10);
Tarray b=a; // Deep copy will be created since class contain copy constructor
return 0;
}
