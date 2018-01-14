/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 8, 2018, 3:27 PM
 */

#include <iostream>
using namespace std;

int main() 
{
    long payAmount,payPeriods,annualPay;
    payAmount=2200;
    payPeriods=26;
    annualPay=payAmount*payPeriods;
    
    cout <<"Daniel gets paid $"<<annualPay<<" annually";
    
    return 0;
}

