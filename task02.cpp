#include<iostream>
using namespace std;
void Reverse(string a);
main()
{
    string boolean;
    cout<<"Enter 'true' or 'false': ";
    cin>>boolean;
    Reverse(boolean);
}
void Reverse(string a)
{
    if (a == "true")
    {
        cout<<"false";

     }
    if (a == "false") 
    {
        cout<<"true";
     }
}