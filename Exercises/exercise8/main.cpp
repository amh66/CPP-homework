#include <iostream>
//Solving the equation ax+b
using namespace std;

int main()
{
    float a,b,x;
    cout<<"Please enter the numbers to solve the ax+b"<<endl;
    cout<<" a = ";
    cin>>a;
    cout<<" b = ";
    cin>>b;

    if (a==0)
        cout<<"Error";
    else
    {
        x=-b/a;
        cout<< a<<" x + "<<b<<" = "<<x;
    }
    return 0;
}
