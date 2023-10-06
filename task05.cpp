#include<iostream>
using namespace std;
void possibleBonus(int x,int y);
main()
{
    int n1,n2;
    cout<<"Enter your position: ";
    cin>>n1;
    cout<<"Enter your friend's position: ";
    cin>>n2;
    possibleBonus(n1,n2);
}

void possibleBonus(int x,int y)
{
    if (x + 6 >= y ){
        cout<<"true";
    }
    if (x +6 < y){
    cout<<"false";}
}