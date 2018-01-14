/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 8, 2018, 5:12 PM
 */

#include <iostream>
using namespace std;


int main() 
{
    float percent;
    long totalSales;
    long long sales;
    percent=0.58;
    sales=8600000;
    totalSales=sales*percent;
    
    cout <<"The East Coast sales division of a company generates"<<endl
            <<" 58% of total sales. If the company makes $8.6 million"<<endl
            <<" the total sales that they make would be $"<<totalSales<<endl;
    
    return 0;
}

