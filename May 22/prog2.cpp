#include<iostream>
using namespace std;
int main()
{

    string web;
    cout<<"enter website name";
    cin>>web;

    if (web=="Amazon")
    {
        cout<<"Enter product or service: ";
        cin>>web;

        if (web=="product")
        {
            
        cout<<"Enter the shoes or clothes: ";
        cin>>web;
        
        if(web=="shoes")
        {
            cout<<"1000";
        }
        else if(web=="clothes")
        {
            cout<<"2000";
        }
        else
        {
            cout<<"Invalid";
        }
        }
    

       else if(web=="service")
       {
        cout<<"Not available";

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
    
}