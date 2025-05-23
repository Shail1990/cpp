#include<iostream>
#include<limits>
#include<climits>
using namespace std;

int main()
{
    int a=10;
    int b= 20;

    cout<<(!a);
    cout<<(90 && -10)<<endl;
    cout<<(a || b)<<endl;
    
    cout<<(a>b)<<endl;
    cout<<(a<b)<<endl;
    cout<<(a<=b)<<endl;
    
      a=7, b=8;
    cout<<(a&b)<<endl;


    cout<<"enter the no";
    cin>>a;

    (a>=0)? cout<<"no is positive": cout<<"no is negative";

  

    return 0;


}