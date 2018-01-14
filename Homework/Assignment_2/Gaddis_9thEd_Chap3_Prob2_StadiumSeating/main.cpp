/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 8:34 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float a,b,c,totalA,totalB,totalC,income;
    
    cout <<"How many tickets were sold?"<<endl;
    cout <<"Class A: ";
    cin >>a;
    cout <<"Class B: ";
    cin >>b;
    cout <<"Class C: ";
    cin >>c;
    totalA=a*15;
    totalB=b*12;
    totalC=c*9;
    income=totalA+totalB+totalC;
    cout <<"The total profit is $"<<income<<".";
    
    return 0;
}

