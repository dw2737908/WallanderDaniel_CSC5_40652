/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 6:23 PM

 * Purpose:  e to the x

 */

#include <iostream>
#include <cmath>    //Math Library
using namespace std;

int main(int argc, char** argv) 
{
    float aproxE,term,x;
    int counter;

    aproxE=1.0f;
    counter=1;
    x=0.5f;
    term=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    aproxE+=term;
    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
    term*=x/counter++;
    cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;

    return 0;
}