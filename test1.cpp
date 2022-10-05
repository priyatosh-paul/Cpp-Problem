#include<iostream>

using namespace std;

int fun(int a)
{
	return a;
}

char fun(int a)
{
	return (char*)a;
}

int main()
{
	fun(12);
	fun(23);
	return 0;
}
