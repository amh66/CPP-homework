#include <iostream>
//Common divisor of two numbers
using namespace std;

int main()
{
    int x,y;
    int minn=y;
    if (x<y)
        x=minn;
    cout<<" Enter number one =";
    cin>>x;
    cout<<" Enter number two = ";
    cin>>y;
    cout<<" Common divisor = ";
    for(int i=1;i<minn;i++)
    {
        if(x%i==0 && y%i==0)
        cout<<i<<"  ";
    }
    return 0;
}
