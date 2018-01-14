/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 8:09 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int a,b,c,d,e;
    float finalScore;
    
    cout <<"Determine your test score average."<<endl;
    cout <<"Test 1 ";
    cin >>a;
    cout <<"Test 2 ";
    cin >>b;
    cout <<"Test 3 ";
    cin >>c;
    cout <<"Test 4 ";
    cin >>d;
    cout <<"Test 5 ";
    cin >>e;
    finalScore=(a+b+c+d+e)/5;
    cout <<"Your test score average is "<<finalScore;

    return 0;
}

