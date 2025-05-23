#include<iostream>
using namespace std;

int main()
{

    int a, b;
    char op;
    cout<<"Enter first no: ";
    cin>>a;
    cout<<"Enter second no: ";
    cin>>b;

    cout<<"+ - * / % ";
    cin>>op;

    switch (op)
    {
    case '+' :
    cout<<"a+b";
        break;
    
    case '-' :
    cout<<a-b;
        break;

    case '*':
    cout<<a*b;
     break;

    case '/':
    cout<<a/b;
    break;

    case '%':
    cout<<a%b;
    break;


    default:
    cout<<"Invalid";

     
    }


    return 0;
}