#include<iostream>

using namespace std;

class SingleTone
{
	private :
		int a;
		
		SingleTone()
		{
			this->a=0;
		}

		SingleTone(int a)
		{
			this->a=a;
		}
	public:
		void getInstance()
		{
			SingleTone *SingleToneInstance = new SingleTone();
			return SingleToneInstancee;
		}

		void Display(void)
		{
			cout<<"I am Here !"<<endl;

		}
};

int main(void)
{
	SingleTone s;
	s. Display();

	return 0;
}


