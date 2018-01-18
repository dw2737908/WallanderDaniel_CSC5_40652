/* 

 * File:   main.cpp

 * Author: Daniel Wallander

 * Created on January 17, 2018, 5:45 PM

 * Purpose:  Fibonacci Sequence

 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    unsigned int fi,fim1,fim2;

    fim1=1;
    fim2=1;
    cout<<fim2<<","<<fim1;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    fi=fim1+fim2;
    cout<<","<<fi;
    fim2=fim1;
    fim1=fi;
    cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;

    return 0;
}