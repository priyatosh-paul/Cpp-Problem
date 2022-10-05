#include<iostream>
#include "Sally.h"

using namespace std;

Sally::Sally()
{
}

Sally::Sally(int a)
{
	num = a;
}

Sally Sally :: operator+(Sally other)
{
	Sally brandNew;
	brandNew.num = num + other.num;
	return (brandNew);
}

