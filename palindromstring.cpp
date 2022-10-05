#include<iostream>
#include<string>
using namespace std;
int main()
{
	char *string;
	cout<<"Please Enter the string 	::	";
	cin>>string;
	int flag=0;
	for(int i=0;int j=string.length()-1;j>=0;i<string.length()-1;++i;--j)
	{
		if(string[i]!=string[j])
		{
			flag ++;
			break;
		}
	}
	if(flag==0)
		cout<<"Palindrom"<<endl;
	else
		cout<<"Not Palindrom"<<endl;

			
	return 0;
}





