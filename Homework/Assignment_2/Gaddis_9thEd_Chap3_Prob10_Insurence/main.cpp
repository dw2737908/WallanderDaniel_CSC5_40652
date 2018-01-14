/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 9:44 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    double percent,replace,total;
    percent=0.80;
    
    cout <<"How much will it cost to replace your home? ";
    cin >>replace;
    total=replace*percent;
    cout <<"You should get $"<<total<<" worth of insurance.";

    return 0;
}

