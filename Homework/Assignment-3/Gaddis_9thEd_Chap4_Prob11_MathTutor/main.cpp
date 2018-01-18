/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 3:50 PM

 * Purpose:  Math Tutor

 */
#include <iostream>  
#include <cstdlib>   
#include <ctime>     
#include <iomanip>   
using namespace std;

int main(int argc, char** argv) 
{
    srand(static_cast<unsigned int>(time(0)));
    unsigned short op1,op2,result,answer;
    op1=rand()%900+100;
    op2=rand()%1000;   
    result=op1+op2;
    cout<<"Test your addition skills, Solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl<<(result>1000?" ":"  ");
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl;

    return 0;
}