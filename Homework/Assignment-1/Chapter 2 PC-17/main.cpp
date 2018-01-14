/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 8, 2018, 5:15 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    int shares,price,priceWOC;
    float percent,commissions,totalPrice;
    shares=750;
    price=35;
    percent=0.02;
    priceWOC=shares*price;
    commissions=priceWOC*percent;
    totalPrice=commissions+priceWOC;
    
    cout <<"Price of stock $"<<priceWOC<<endl
            <<"Commission $"<<commissions<<endl
            <<"Total price $"<<totalPrice<<endl;
    
    return 0;
}

