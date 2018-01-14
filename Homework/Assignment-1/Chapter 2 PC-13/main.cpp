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
    float percent,costs,profit,sellingPrice;
    percent=0.35;
    costs=14.95;
    profit=percent*costs;
    sellingPrice=profit+costs;
    
    cout <<"The selling price of circuit boards are $"<<sellingPrice<<endl;
    
    return 0;
}

