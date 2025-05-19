#include <iostream>
// The largest number
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Please enter first number = ";
    cin>>a;
    cout<<"Please enter second number = ";
    cin>>b;
    cout<<"Please enter third number = ";
    cin>>c;
    cout<<"\n";
    if (a>b && a>c)
        cout<<a<<" is largest"<<"\n";
    else if (b>a && b>c)
        cout<<b<<" is largest"<<"\n";
    if (c>a && c>b)
        cout<<c<<" is largest"<<"\n";
    return 0;
}
