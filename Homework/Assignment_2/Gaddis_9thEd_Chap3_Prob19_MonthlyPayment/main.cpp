/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 12, 2018, 9:50 AM

 * Purpose:  Monthly Payment

 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float HLFPNY=5e-3f;
const int   SHIFT =100;

int main(int argc, char** argv) 
{
    float loan,   
          mnPymnt,
          intRate,
          totAmt, 
          intPaid;
    char nPymnt;  

    loan   =1e4f; 
    nPymnt =36;   
    intRate=1e-2f;

    float util=pow(1+intRate,nPymnt);
    mnPymnt=util*intRate*loan/(util-1);
    int iPymnt=(mnPymnt+HLFPNY)*SHIFT;
    mnPymnt=static_cast<float>(iPymnt)/SHIFT;
    totAmt=nPymnt*mnPymnt;
    intPaid=totAmt-loan;

    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Calculator"<<endl;
    cout<<"Loan amount          = $"<<loan<<endl;
    cout<<"Interest rate        = "<<setw(9)<<intRate*1200<<"%/year"<<endl;
    cout<<"Number of months     = "<<setw(6)<<static_cast<int>(nPymnt)<<endl;
    cout<<"Monthly Loan Payment = $"<<setw(8)<<mnPymnt<<endl;
    cout<<"Total Amount Paid    = $"<<totAmt<<endl;
    cout<<"Interest Paid        = $"<<setw(8)<<intPaid<<endl;

    return 0;
}