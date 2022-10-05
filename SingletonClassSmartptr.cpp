#include <memory>
#include <iostream>

using namespace std;
class MyClass {

private:
    static std::shared_ptr<MyClass> instance;
    
public:
    uint8_t str[50]; //some random data
    MyClass()
     { 
		 cout <<"constructor Called" << endl; 
	}
    ~MyClass()
     {
		 cout <<"destructor Called"<< endl;
	}
    static std::shared_ptr<MyClass> &Get()
    {
    if (instance == NULL)
    {
        instance= std::shared_ptr<MyClass>(new MyClass());
        return instance;
    }
    return instance;
	}



};

std::shared_ptr<MyClass> MyClass::instance=NULL;


/*std::shared_ptr<MyClass> &MyClass::Get()
{
    if (instance == NULL)
    {
        instance= std::shared_ptr<MyClass>(new MyClass());
        return instance;
    }
    return instance;
}
*/
int main()
{
    std::shared_ptr<MyClass> p1 =MyClass::Get();

//    printf("We have %" PRIu32, p1.use_count());
    if (1)
    {
        std::shared_ptr<MyClass> p2 =MyClass::Get();//this should not  
                                                     //  create a new class
  //      printf("We have %" PRIu32, p1.use_count());  //this should be two...
    //    printf("We have %" PRIu32, p2.use_count());  //this should be two...
        //when p1 goes out of scope here it should not call destructor
    }
   // printf("We have %" PRIu32, p1.use_count());

    //now destructor should be called
    return 0;
}
