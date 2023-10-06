#include<iostream>
using namespace std;
void longestTime(int x,int y);
main()
{
    int hours, min;
    cout<<"Enter the number hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>min;
    longestTime(hours,min);
}
void longestTime(int x , int y){
    if (x * 60 > y)
    {
        cout<<x;
    }
    if (x * 60 < y){
        cout<<y;
    }
}