/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 8, 2018, 5:45 PM

 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{

    unsigned short htFnce, 
                   ltFnce, 
                   ptCovrg,
                   nGallns;

    htFnce=6;    
    ltFnce=100;
    ptCovrg=340; 
    nGallns=2*(htFnce*ltFnce)/ptCovrg+1;

    cout<<"Height of fence = "<<htFnce<<" ft"<<endl

        <<"Length of fence = "<<ltFnce<<" ft"<<endl

        <<"Number of Gallons to cover 1 side "

        <<"of fence twice = "<<nGallns<<endl;

    return 0;

}