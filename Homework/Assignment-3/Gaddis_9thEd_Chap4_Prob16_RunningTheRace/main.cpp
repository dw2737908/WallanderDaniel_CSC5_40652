/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 17, 2018, 6:12 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    string name1,name2,name3;
    int time1,time2,time3;
    
    cout <<"Type the first name of the first runner: ";
    cin >>name1;
    cout <<"How many seconds did it take for him/her "
            "to complete the race? ";
    cin >>time1;
    cout <<"Type the name of the second runner: ";
    cin >>name2;
    cout <<"How many seconds did it take for him/her "
            "to complete the race? ";
    cin >>time2;
    cout <<"Type the name of the third runner: ";
    cin >>name3;
    cout <<"How many seconds did it take for him/her "
            "to complete the race? ";
    cin >>time3;
    if (time1 > time2 && time2 >time3)
    {
        cout <<"1st place: "<<name1<<endl;
        cout <<"2nd place: "<<name2<<endl;
        cout <<"3rd place: "<<name3<<endl;
    }
    
    if (time1 > time3 && time3 >time2)
    {
        cout <<"1st place: "<<name1<<endl;
        cout <<"2nd place: "<<name3<<endl;
        cout <<"3rd place: "<<name2<<endl;
    }
    
    if (time2 > time1 && time1 >time3)
    {
        cout <<"1st place: "<<name2<<endl;
        cout <<"2nd place: "<<name1<<endl;
        cout <<"3rd place: "<<name3<<endl;
    }
    
    if (time3 > time1 && time1 >time2)
    {
        cout <<"1st place: "<<name3<<endl;
        cout <<"2nd place: "<<name1<<endl;
        cout <<"3rd place: "<<name2<<endl;
    }
    
    if (time2 > time3 && time3 >time1)
    {
        cout <<"1st place: "<<name2<<endl;
        cout <<"2nd place: "<<name3<<endl;
        cout <<"3rd place: "<<name1<<endl;
    }
    
    if (time3 > time2 && time2 >time1)
    {
        cout <<"1st place: "<<name3<<endl;
        cout <<"2nd place: "<<name2<<endl;
        cout <<"3rd place: "<<name1<<endl;
    }
    return 0;
}

