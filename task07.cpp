#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main()
{
    int red_rose,white_rose, Tulip;
    cout<<"Red Rose: ";
    cin>> red_rose;
    cout<<"White Rose: ";
    cin>> white_rose;
    cout<<"Tulip: ";
    cin>> Tulip;
    flowerShop(red_rose,white_rose,Tulip);
}

void flowerShop(int redRose,int whiteRose,int tulip)
{
    float originalPrice;
    originalPrice = (redRose*2.00) + (whiteRose*4.10) + (tulip*2.50) ;
    cout<<"Original Price"<<originalPrice<<endl;
    if (originalPrice>200)
    {
        cout<<"Price after Discount"<<originalPrice - 0.2*originalPrice;
    }
}