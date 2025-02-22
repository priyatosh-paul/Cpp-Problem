#include <iostream>
using namespace std;
int main()
{
    char arr[100]="aaabcacdefffhhh";

int l=0;
while(arr[l] != '\0')
{
	++l;
}

for(int i=0;i<l; ++i)
{
	if(arr[i]!=arr[i+1])
		cout<< arr[i];
}

    return 0;
}