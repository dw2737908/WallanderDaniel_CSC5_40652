/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 8, 2018, 3:58 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    int milesDriven,gallonsOfGas,MPG;
    milesDriven=375;
    gallonsOfGas=15;
    MPG=milesDriven/gallonsOfGas;
    
    cout <<"A car that holds "<<gallonsOfGas<<" gallons of gas,"<<endl;
    cout <<"and can travel "<<milesDriven<<" miles has a"<<endl;
    cout <<"MPG (miles per gallon) of "<<MPG<<endl;
    
    return 0;
}

