#include <iostream>
#include <cmath>
#include <string>

#define Type double

const int f_amount = 8;

using namespace std;

Type hardlim(Type n)
{
    if(n<0) return 0;
    else return 1;
}

Type hardlims(Type n)
{
    if(n<0) return -1;
    else return 1;
}

Type purelin(Type n)
{
    return n;
}

Type satlin(Type n)
{
    if(n<0) return 0;
    else if(n>1) return 1;
    else return n;
}

Type satlins(Type n)
{
    if(n<-1) return -1;
    else if(n>1) return 1;
    else return n;
}

Type logsig(Type n)
{
    Type a = 1/(1+exp(-n));
    return a;
}

Type tansig(Type n)
{
    Type a = (exp(n)-exp(-n))/(exp(n)+exp(-n));
    return a;
}

Type poslin(Type n)
{
    if(n<0) return 0;
    else return n;
}

// Type compet()
// {
//     if(max(n)) return 1;
//     else return 0;
// }


string f_name[f_amount]={
    "hardlim","hardlims",
    "purelin","satlin",
    "satlins","logsig",
    "tansig","poslin"
    };

void find_functions(Type w, Type p, Type b, Type output)
{
    Type n = w*p+b;
    
    Type f_arr[f_amount]={
    hardlim(n),hardlims(n),
    purelin(n),satlin(n),
    satlins(n),logsig(n),
    tansig(n),poslin(n)
    };
    
    for(int i=0; i<f_amount; i++)
    {
        if (abs(output - f_arr[i]) < 0.001)
        cout << f_name[i] << endl;
    }
}

