// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<string>
#include<iostream>
using namespace std;
string solution(int N) 
{
	// write your code in C++14 (g++ 6.2.0)
	string str;

	for(int i =1; i <= N; ++i)
	{
		if(i % 2 !=0)
			str += "+" ;
		else
			str += "-";

	}
	return str;
}

int main()
{
	int n;
	cout<<"Please take the no : ";
	cin>>n;
	cout <<"The String is  "<< solution(n) <<endl;

	
	return 0;

}












