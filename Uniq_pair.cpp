//write a pogram to find the uniq number of pairs in a given set of intiger. ? ex- N= {1,4,5,3,2}, adition of number inside pair will be 
//equal to integer R=5, Find the number of pair without repetation?

#include<iostream>

using namespace std;

void uniq_no_of_pair(int arr[])
{
        int l = sizeof(arr) / sizeof(arr[0]);
	for(int i=0; i < l; i++)
	{
		for (int j=i+1; j < l; j++)
		{
			if( arr[i] + arr[j] == arr[j+1])
			
			cout<< arr[i] << " & "<<arr[j] << " is Uniq"<<endl;
		}
	}
}

int main()
{	
	int arr[5]= {1,4,5,3,2};
	uniq_no_of_pair(arr);
	return 0;
}
