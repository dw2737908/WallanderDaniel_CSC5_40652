/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 4:51 PM

 * Purpose:  Phone Call Charge

 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char** argv) 
{
    unsigned short cost,tmSpan,hrs,mins;
    unsigned short bfrTime,aftTime;
    string day,strTime;
    
    cout<<"Calculate cost of phone call"<<endl;
    cout<<"Input the day a phone call was made"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>strTime;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cout<<"Duration not more than 60 minutes is valid"<<endl;
    cin>>tmSpan;
    if(tmSpan>60)exit(0);
    hrs =(strTime[0]-48)*10+(strTime[1]-'0');
    mins=(strTime[3]-48)*10+(strTime[4]-'0');
    aftTime=(mins+tmSpan-60<=0)?0:mins+tmSpan-60;
    bfrTime=tmSpan-aftTime;
    if(day[0]=='S'||day[0]=='s')
    {
        cost=bfrTime*15;
    }
    else if(hrs>=8&&hrs<18)
    {
        cost=bfrTime*40;
    }
    else
    {
        cost=bfrTime*25;
    }
    hrs+=1;
    hrs=hrs>23?0:hrs;
    if(hrs==0&&day=="Su")day="Mo";
    if(hrs==0&&day=="Fr")day="Sa";
    if(day[0]=='S'||day[0]=='s')
    {
        cost+=aftTime*15;
    }
    else if(hrs>=8&&hrs<18)
    {
        cost+=aftTime*40;
    }
    else
    {
        cost+=aftTime*25;
    }
    cout<<fixed<<setprecision(2)<<endl;
    cout<<"The phone call ended on "<<day<<" at "
        <<hrs<<":"<<aftTime<<" for "<<tmSpan
        <<" minutes cost = $"<<cost/100.0f<<endl;
    cout<<"Before the hour = "<<bfrTime<<" minutes"<<endl;
    cout<<"After the hour  = "<<aftTime<<" minutes"<<endl;
    
    return 0;
}