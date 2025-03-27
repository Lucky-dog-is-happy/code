#include "transfer_function.hh"

Type hardlim(Type n)
{
    if (n < 0)
        return 0;
    else
        return 1;
}

Type hardlims(Type n)
{
    if (n < 0)
        return -1;
    else
        return 1;
}

Type purelin(Type n)
{
    return n;
}

Type satlin(Type n)
{
    if (n < 0)
        return 0;
    else if (n > 1)
        return 1;
    else
        return n;
}

Type satlins(Type n)
{
    if (n < -1)
        return -1;
    else if (n > 1)
        return 1;
    else
        return n;
}

Type logsig(Type n)
{
    Type a = 1 / (1 + exp(-n));
    return a;
}

Type tansig(Type n)
{
    Type a = (exp(n) - exp(-n)) / (exp(n) + exp(-n));
    return a;
}

Type poslin(Type n)
{
    if (n < 0)
        return 0;
    else
        return n;
}

// Type compete()
// {
//     if(max(n)) return 1;
//     else return 0;
// }

