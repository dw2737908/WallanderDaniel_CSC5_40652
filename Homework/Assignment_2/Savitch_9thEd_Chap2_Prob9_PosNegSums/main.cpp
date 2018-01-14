/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 12, 2018, 10:10 AM

 * Purpose:  Calculating Pos/Neg/Sums for 10 numbers

 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    int number,negSum,posSum;

    negSum=posSum=0;

    cout<<"This program adds 10 numbers"<<endl;
    cout<<"It determines the negative, positive and total sum"<<endl;
    cout<<"Input 10 numbers, 1 at a time"<<endl;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
   
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;  

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;   

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;    

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;

    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;

    cout<<"The negative sum = "<<negSum<<endl;
    cout<<"The positive sum = "<<posSum<<endl;
    cout<<"The total sum    = "<<negSum+posSum<<endl;

    return 0;
}