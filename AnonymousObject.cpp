#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y; // an anonymous object is created to hold and return the result of x + y
}
 
int main()
{
    cout << add(5, 3); 
    cout<<endl;
    return 0;
}


