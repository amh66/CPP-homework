#include <iostream>
// Get the day of the week and display the number associated with that day.
using namespace std;

int main()
{
    string num;
    cout << "Please type one of the days from Saturday to Friday correctly : ";
    cin>>num;
    cout<<"\n";
    if (num=="saturday")
        cout<<"this days number is 1"<<"\n";
    else if (num=="sunday")
        cout<<"this days number is 2"<<"\n";
    else if (num=="monday")
        cout<<"this days number is 3"<<"\n";
    else if (num=="tuesday")
        cout<<"this days number is 4"<<"\n";
    else if (num=="wednesday")
        cout<<"this days number is 5"<<"\n";
    else if (num=="thursday")
        cout<<"this days number is 6"<<"\n";
    else if (num=="friday")
        cout<<"this days number is 7"<<"\n";
    else
        cout<<"*ERROR* you typed wrong"<<"\n";
    return 0;
}
