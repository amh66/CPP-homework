#include <iostream>
//Even or odd numbers smaller than the number, By user choice
using namespace std;

int main()
{
    int x;
    char c;
    cout<<"Enter a number = ";
    cin>>x;
    cout<<endl<<" Choose one of the options below"<<endl;
    cout<<" a) Display even numbers less"<<endl;
    cout<<" b) Display odd numbers less" <<endl;
    cin>>c;
    cout<<endl;
    switch (c)
    {
        case 'a': for(int i=0;i<x;i+=2) cout<<i<<" "; break;
        case 'b': for(int y=1;y<x;y+=2) cout<<y<<" "; break;
        default: cout<<" You entered incorrectly";
    }

    return 0;
}
