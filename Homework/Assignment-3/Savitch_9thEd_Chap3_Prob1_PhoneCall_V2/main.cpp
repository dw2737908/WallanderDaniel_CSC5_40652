/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 4:32 PM

 * Purpose:  Phone Call Charge

 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
    unsigned short cost,tmSpan,hrs;
    string day,strTime;

    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>strTime;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>tmSpan;

    hrs =(strTime[0]-48)*10+(strTime[1]-'0');
    if(day[0]=='S'||day[0]=='s')
    {
        cost=tmSpan*15;
    }
    else if(hrs>=8&&hrs<18)
    {
        cost=tmSpan*40;
    }
    else
    {
        cost=tmSpan*25;
    }

    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call on "<<day<<" at "
        <<strTime<<" for "<<tmSpan
        <<" minutes cost = $"<<cost/100.0f<<endl;
    
    return 0;
}