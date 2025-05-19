#include <iostream>
//Display the students status according to the following grades :
//A=20-18  B=18-16  c=16-14
using namespace std;

int main()
{
    float x;
    cout << "Enter the students grade to view status = ";
    cin>>x;
    cout<<"\n";
    if (x>=18 && x<=20)
        cout<<"*GOOD*  Status A"<<"\n";
    else if (x>=16 && x<18)
        cout<<"*AVERAGE*  Status B"<<"\n";
    else if (x>=14 && x<16)
        cout<<"*BAD*  Status C"<<"\n";
    else
        cout<<"*ERROR* enter betwen 14-20"<<"\n";
    return 0;
}
