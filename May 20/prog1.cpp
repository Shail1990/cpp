#include<iostream>
using namespace std;

int main()
{
  int amount;
  int Balance = 10000, option;

  cout<<"click 1 for withdraw\n click 2 for deposit\n click 3 for check balance: ";
  cin>> option;

  if (option==1)
  {
    cout<<"Enter amount: ";
    cin>>amount;
    
    if(amount>0 && amount <=Balance)
    {
    cout<<"After withdrwal your amount is : "<<Balance-amount;
    }
    else
   {
    cout<<"Invalid amount";
   }
  }

else if (option==2)
  {
  cout<<"Enter Amount";
  cin>>amount;

  if (amount>0)
  {
  Balance+=amount;
  cout<<"After deposite your amount is: "<<Balance;
  }
  else
  {
  cout<<"Invalid amount";
  }
  }

  else if (option==3)
  {
    cout<<"your balance amount is : "<<Balance;
  
  }

  else
  cout<<"Invalid";


  return 0;

}
