/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 4:00 PM

 * Purpose:  Phone Call Charge

 */

#include <iostream>  
#include <iomanip>   
using namespace std;

int main(int argc, char** argv) 
{
    unsigned short cost,
            strTime,    
            tmSpan;     

    char day,           
         dm;            

    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>setw(2)>>strTime>>dm>>dm>>dm;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;

    if(day=='S'||day=='s')
    {
        cost=tmSpan*15;
    }
    else if(strTime>=8&&strTime<18)
    {
        cost=tmSpan*40;
    }
    else
    {
        cost=tmSpan*25;
    }

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call cost = $"<<cost/100.0f<<endl;

    return 0;
}