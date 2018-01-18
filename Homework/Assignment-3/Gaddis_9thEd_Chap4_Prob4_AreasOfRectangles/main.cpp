/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 17, 2018, 3:22 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) 
{
    int lengthA,widthA,areaA,lengthB,widthB,areaB;
    cout <<"Type in the width and length of two rectangles."<<endl;
    cout <<"length of rectangle one: ";
    cin >>lengthA;
    cout <<"width of rectangle one: ";
    cin >>widthA;
    areaA = widthA * lengthA;
    cout <<"Your first rectangle has an area of "<<areaA<<endl;
    cout <<"length of rectangle two: ";
    cin >>lengthB;
    cout <<"width of rectangle two: ";
    cin >>widthB;
    areaB = widthB * lengthB;
    cout <<"Your second rectangle has an area of "<<areaB<<endl;
    if (areaA > areaB)
        cout <<"Your first rectangle has a greater "
                "area then your second rectangle";
    else
        cout <<"Your second rectangle has a greater "
                "area then your first rectangle";

    return 0;
}

