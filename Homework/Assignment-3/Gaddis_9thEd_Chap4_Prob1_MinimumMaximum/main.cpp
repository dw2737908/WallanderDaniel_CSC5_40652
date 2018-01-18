/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 17, 2018, 3:11 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    int a,b;
    cout <<"please input two numbers"<<endl;
    cout <<"number 1"<<endl;
    cin >>a;
    cout <<"number 2"<<endl;
    cin >>b;
    if (a > b)
        cout <<a<<" is greater then "<<b;
    else
        cout <<b<<" is greater then "<<a;
    
    return 0;
}

