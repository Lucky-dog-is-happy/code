#include <iostream>
#include <vector>
#include "transfer_function.hh"

Type input_cal(Type w, Type p, Type b)
{
    return w * p + b;
}

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

int main()
{
    
    return 0;
}
