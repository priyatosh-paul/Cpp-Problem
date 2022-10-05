#include<iostream>
#include<map>
using namespace std;
class Sample
{
	public:
		Sample()
		{
			cout<<endl<<"Inside constructor method"<<endl;
		}~Sample()
		{
			try
			{
				throw 100;
			}
			catch(...)
			{
			}
			cout<<endl<<"Inside destructor method"<<endl;
		}
};
int main()
{
	Sample obj;

	return 0;

}
