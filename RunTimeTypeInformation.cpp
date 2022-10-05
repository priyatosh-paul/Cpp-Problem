#include<iostream>
#include<typeinfo>
//#include<string.h>
using namespace std;
int main(void)
{
	int num=100;
	char babu= 'A';
	string abu= "mama";
	type_info const &other=typeid(num);
	type_info const &other1=typeid(babu);
	type_info const &other2=typeid(abu);
	cout<<endl<<"Type Is:::"<<other.name()<<endl;
	cout<<endl<<"Type Is:::"<<other1.name()<<endl;
	cout<<endl<<"Type Is:::"<<other2.name()<<endl;
	return 0;
}
