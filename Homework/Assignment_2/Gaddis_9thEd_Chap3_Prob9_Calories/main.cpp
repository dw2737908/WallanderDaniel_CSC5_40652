/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 9:14 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int cookies, calories;
    
    cout <<"How many cookies did you eat? ";
    cin >>cookies;
    calories=cookies*10;
    cout <<"You have consumed "<<calories<<" calories";

    return 0;
}

