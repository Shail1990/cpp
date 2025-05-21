#include<iostream>
using namespace std;

int main()
{
  string bank;

  cout<<"Enter the Bank Name"<<endl;
  cin>>bank;

  if(bank=="SBI")
  {

    cout<<"SBI Welcomes You!"<<endl;

    int pin = 1234;
     cout<<"ENter the pin"<<endl;
     cin>> pin;

    if(pin==1234)
    {
        cout<<"Valid pin"<<endl;


        int option; int sum= 10000, amount;

        cout<<"enter 1 for withdrawal\n enter 2 for deposit\n enter 3 for Balance enquiry\n";
        cin>>option;


        if (option==1)
        {

            cout<<"withdrw!! plz enter the amount";
            cin>>amount;

            cout<<"After withdrwal balance is: "<<sum-amount;

        }

        else if(option==2)
        {

            cout<<"Deposit!! plz enter the amount";
            cin>>amount;

            cout<<"After deposte balance is: "<<sum+amount;
        }

        else if(option==3)

        {

            cout<<"Balance is: " <<sum;


        }

    }
    else
    {
        cout<<"Invalid";


    }

    

  }
  else
  {
    cout<<"Invalid";
  }
    return 0;
}