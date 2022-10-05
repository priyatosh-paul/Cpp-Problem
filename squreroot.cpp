#include<iostream>
using namespace std;

void squre_root(int b)
{
	int i;
	double j,k;
	if(b>0)
	{
		for(int i=1;i*i<=b;i++)
		{
			cout<<"i "<<i<<endl;
			for( j=0.001;j<=1;j+=0.001)
			{cout<<"j "<<j<<endl;
				 k=(double)i+j;
				cout<<"double of i "<<i<<endl;
				cout<<"k "<<k<<endl;
				if (k*k>(double)b)
				{
					k=k-0.001;
					break;
				}
			//	cout<<"The squreroot of "<<b<<" is "<<k<<endl;
				
			}

		}
			
		cout<<"The squreroot of "<<b<<" is "<<k<<endl;
	}
	else
	{
		cout<<b<<" is a -ve number"<<endl;
	}
}

int main(void)
{
	int a;
	cout<<"Please take the number  "<<endl;
	cin>> a;
	squre_root(a);
	return 0;
}


