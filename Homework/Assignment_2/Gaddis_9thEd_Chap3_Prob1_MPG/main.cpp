/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 6:43 AM
 */

#include <iostream>
using namespace std;

int main() 
{
    double miles,gallon,MPG;
    
    cout <<"Determine your cars gas mileage"<<endl;
    cout <<"How much gas can your car hold? ";
    cin >>gallon;
    cout <<"How many miles can it be driven" 
           "before running out of gas? ";
    cin >>miles;
    MPG=miles/gallon;
    cout <<"Your cars' gas mileage is "<<MPG<<"MPG."<<endl;
    
    return 0;
}

