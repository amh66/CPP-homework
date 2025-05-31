#include <iostream>
//The elapsed time of a persons life
using namespace std;

int main()
{
    int x,year,box,moun,day;
    cout<<" Please enter a number as the day =  ";
    cin>>x;
    year=x/365;
    box=x%365;
    moun=box/30;
    day=box%30;
    cout <<year <<" : "<<moun<<" : "<<day;
    return 0;
}
