#include<iostream>

using namespace std;

void accept_record(int& number)
{
    cout << "Enter number   :   "<<endl;
    cin >> number;
}

int calculate(int num1, int num2)
{
    if(num2 == 0)
        throw string("Divide by Zero Exception");
    return num1/num2;
}

void print_result(const int& result)
{
    cout<<"result   :   "<<result<< endl;

}

int main(void)
{
    try
    {
        try
        {
            int num1;
            accept_record(num1);
            int num2;
            accept_record(num2);
            int result= calculate(num1,num2);
            print_result(result);
        }
        catch(string ex)
        {
            cout << ex << endl;
        }
    }
    catch(...)
    {
        cout <<"Exception" << endl;
    }
    return 0;
}



