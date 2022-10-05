/*To omit the dengereous abilty of copy constructor to copy the all element using loop we use move construcor by using r value*/

#include<iostream>

using namespace std;

class A

{
    private:

        int size;
        int *ptr;

    public:

        A()
        {
            cout<<"Parameterles Constructor called"<<endl;
            this->size=0;
            this->ptr=NULL;

        }

        A(int size)
        {
            cout<<"Parameterized Constructor called"<<endl;
            this->size=size;
            this->ptr=new int [size];
        }

        A(const A & other)
        {
            cout<<"Copy Constructor called"<<endl;
            this->size=other.size;
            this->ptr=new int[this->size];
            for(int i=0; i<size; ++i)
                this->ptr[i]=other.ptr[i];

        }
        A(const A && other)
        {
            cout<<"Move Constructor called"<<endl;

            this->size=other.size;
            this->ptr=other.ptr;
         //   other.ptr = nullptr;
        }

};


int main()
{

    A obj(10);

//    A obj1=obj;


    A obj2=std::move(obj);
    return 0;
}
