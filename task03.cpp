#include<iostream>
using namespace std;
void dis(string a,float x);
main()
{
    string country;
    float ticket;

    cout<<"Enter the country's name: ";
    cin>>country;
    cout<<"Enter the ticket price in dollars: $";
    cin>>ticket;
    dis(country,ticket);

}
void dis(string a,float x){
    float discount ;
    if (a == "Pakistan"){
    discount = x - 0.05*x;
    cout<<"Final ticket price after discount: $"<<discount;
}
    if (a == "Ireland"){
    discount = x - 0.1*x;
     cout<<"Final ticket price after discount: $"<<discount;
}
    if (a == "India"){
    discount = x - 0.2*x;
     cout<<"Final ticket price after discount: $"<<discount;
}
    if (a == "England"){
    discount = x - 0.3*x;
     cout<<"Final ticket price after discount: $"<<discount;
}
    if (a == "Canada"){
    discount = x - 0.45*x;
     cout<<"Final ticket price after discount: $"<<discount;
}
}


