#include<iostream>
using namespace std;

int main()
{
    int amount;
  int Balance = 10000, option;

  cout<<"clic"
  
    cout<<"WELCOME TO ATM"<<endl;
    cout<<"==============="<<endl;


    cout<<"1.Withdraw"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Change pin"<<endl;
    cout<<"4.Balance check"<<endl;
   

     cout<<"ENter the amount";
     cin>>amount;

    if ( amount>0 && amount<=10000 )
    {
      cout<<"withdrwal amount:"<<amount<<endl<<"Remaining amount"<< (Balance) -(amount)<<endl;
    }





    return 0;
}