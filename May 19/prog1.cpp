#include<iostream>
using namespace std;

int main()
{

    int a;
    cout<<"enter the no";
    cin>>a;
    
if(a>=0&&a<=1000)
{
    cout<<"you got five percent discount";
    cout<<"total amount you have to pay is"<<(a) - (a*5/100);

}
else
{
    cout<<"invalid";
}
    return 0;
}