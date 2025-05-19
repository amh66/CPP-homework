#include <iostream>
//number OF the day OF he week
using namespace std;

int main()
{
    int x;
    cout << "Please enter a number between 1 and 7 = ";
    cin>>x;
    cout<<"\n";
    if (x==1)
        cout<<"equal to Saturday"<<"\n";
    else if (x==2)
        cout<<"equal to Sunday"<<"\n";
    else if (x==3)
        cout<<"equal to Monday"<<"\n";
    else if (x==4)
        cout<<"equal to Tuesday"<<"\n";
    else if (x==5)
        cout<<"equal to Wednesday"<<"\n";
    else if (x==6)
        cout<<"equal to Thursday"<<"\n";
    else if (x==7)
        cout<<"equal to Friday"<<"\n";
    else
        cout<<"*ERROR*  Thats not between 1 and 7"<<"\n";
    return 0;
}
