#include<iostream>
#include<limits>
#include<climits>
using namespace std;

int main()
{
    cout<<INT_MAX<<endl;
    cout<<INT_MIN<<endl;

    cout<<CHAR_MAX<<endl;
    cout<<CHAR_MIN<<endl;


    cout<<numeric_limits<int>::max()<<endl;
    cout<<numeric_limits<int>::min()<<endl;

    cout<<numeric_limits<bool>::max()<<endl;
    cout<<numeric_limits<bool>::min()<<endl;

    int num=10;
    cout<<&num<<endl;


    cout<<sizeof (int)<<endl;
    cout<<sizeof (float)<<endl;
    cout<<sizeof (double)<<endl;
    cout<<sizeof (char)<<endl;
    cout<<sizeof (bool)<<endl;

    return 0;

}
    
    



