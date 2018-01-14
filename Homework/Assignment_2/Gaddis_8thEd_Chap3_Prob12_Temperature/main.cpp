/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 12, 2018, 9:36 AM

 * Purpose:  Calculating Temperature

 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    float degF,degC,dgChk;
    float x1,x2,y1,y2;

    x1=32; 
    x2=212;
    y1=0;  
    y2=100;
    
    cout<<"Input the temperature in degrees Fahrenheit"<<endl;
    cout<<"to convert to degrees Celsius"<<endl;
    cin>>degF;

    degC=5.0f/9*(degF-32);
    dgChk=y1+(y2-y1)*(degF-x1)/(x2-x1);

    cout<<degF<<" degrees Fahrenheit = "
            <<dgChk<<" degrees Celsius = "
            <<degC<<" degrees Celsius"<<endl;

    return 0;
}