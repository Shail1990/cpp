#include<iostream>
using namespace std;

int main()
{

//check the no is multiple of 3 or not

int a;
/*cout<<"Enter the no: ";
cin>>a;

(a%3==0)?cout<<"multiple of 3": cout<<"not a multiple of 3";

    return 0;

//check the no is between 50 to 100

(a>50&&a<100)?cout<<"In between 50 and 100": cout<<"not in between 50 and 100";
*/
//find the greatest no between three nos

int b,c;

cout<<"ENter the no :";
cin>>a>>b>>c;

cout<<a<<endl<<b<<endl<<c<<endl;

(a>b&&a>c)? cout<<a<<" is greater"<<endl : cout<<a<<" is lesser"<<endl;
(b>a&&b>c)? cout<<b<<" is greater"<<endl: cout<<b<<" is lesser"<<endl;
(c>b&&c>a)? cout<<c<<" is greater"<<endl: cout<<c<<" is lesser"<<endl;


}