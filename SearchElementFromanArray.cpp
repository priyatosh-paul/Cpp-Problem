#include <iostream>
#include<string>

using namespace std;

int position(int arr[], int key, int size)
{
    
    for(int i=0; i < size; ++i)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}

int main()
{
   // std::cout<<"Hello World";
    int arr[10]={3,7,9,2,5,10,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The key is in"<<position(arr,2, size);
    return 0;
}