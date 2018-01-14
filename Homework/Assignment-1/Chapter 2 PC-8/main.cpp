/* 
 * File:   main.cpp
 * Author: Daniel Wallander
 *
 * Created on January 8, 2018, 3:35 PM
 */

#include <iostream>
using namespace std;


int main() 
{
    float a,b,c,d,e,percent,subtotal,salesTax,total;
    a=15.95;
    b=24.95;
    c=6.95;
    d=12.95;
    e=3.95;
    percent=0.07;
    subtotal=a+b+c+d+e;
    salesTax=percent*subtotal;
    total=salesTax+subtotal;
    
    cout <<"Item 1 = $"<<a<<endl;
    cout <<"Item 2 = $"<<b<<endl;
    cout <<"Item 3 = $"<<c<<endl;
    cout <<"Item 4 = $"<<d<<endl;
    cout <<"Item 5 = $"<<e<<endl<<endl;
    cout <<"Subtotal = $"<<subtotal<<endl;
    cout <<"Sales Tax = $"<<salesTax<<endl<<endl;
    cout <<"Total = $"<<total<<endl;
    
    return 0;
}

