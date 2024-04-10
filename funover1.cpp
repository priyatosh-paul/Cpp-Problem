#include<iostream>
using namespace std;

// /int foo()
// {
// 	return 9;
// }
// char foo()
// {
// 	reurn 'a';
// }

void fun(int a)
{
	cout <<a <<endl;
}

void fun(long int a)
{
	cout <<"long int "<<a <<endl;
}

int main(void)
{
	fun(5);
	// foo();
	return 0;

}




