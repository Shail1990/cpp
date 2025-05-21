/*check the person is pass or fail? 
passing marks 33 or above */

#include<iostream>
using namespace std;


 

int main()
{
 
   /*
    int a;

cout<<"Enter the no:  ";
cin>>a;
    
(a>=33)? cout<<"pass": cout<<"fail";

//bettween 0 and 50

(a>0&&a<50)? cout<<"true": cout<<"false" ;

//check the no is divisible by 4 and 2 both

(a%4==0&&a%2==0)? cout<<"true": cout<<"false";

//check the no is divisble by 2 and above 50
(a%2==0&&a>50)? cout <<"true": cout<<"false";

//check character is vowel and constant?
 */

 char c;
cout<<"Enter the character : ";
cin>>c;

(c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U')? cout<<"vowel":cout<<"constant";




    return 0;
}



