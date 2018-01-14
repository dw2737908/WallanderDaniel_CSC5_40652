/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 12, 2018, 8:18 AM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int males,females;
    float pmales,pfemales,total;
    
    cout <<"figure out what percentage of "
            "males and females are in your class"<<endl;
    cout <<"Number of males ";
    cin >>males;
    cout <<"Number of females ";
    cin >>females;
    total=males+females;
    pmales=(males/total)*100;
    pfemales=(females/total)*100;
    cout <<pmales<<"% of the class are males. "<<pfemales<<"% "
            "of the class are females.";
    
    return 0;
}

