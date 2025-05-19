#include <iostream>
//positive OR negative OR zero numbers
using namespace std;

int main()
{
    int x;
    cout<<"Please enter a number = ";
    cin>>x;
    if (x>0)
        cout<<"Its Positive";
    else if (x==0)
        cout<<"Its Zero";
    else
        cout<<"Its Negative";
    return 0;
}
