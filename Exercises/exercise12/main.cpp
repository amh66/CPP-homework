#include <iostream>
//Displaying the divisors of a number
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number = ";
    cin>>x;
    cout<<"Divisors of "<<x<<" = ";
    for(int i=1;i<=x;i++)
    {
    if (x%i==0)
        cout<<i<<"  ";
    }

    return 0;
}
