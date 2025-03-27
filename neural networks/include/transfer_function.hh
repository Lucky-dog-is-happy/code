#ifndef TRANSFER_FUNCTION_HH
#define TRANSFER_FUNCTION_HH

#include <cmath>
#include <string>

#define Type double
const int f_amount = 8;
string f_name[f_amount] = {
    "hardlim", "hardlims",
    "purelin", "satlin",
    "satlins", "logsig",
    "tansig", "poslin"};

using namespace std;

Type hardlim(Type n);
Type hardlims(Type n);
Type purelin(Type n);
Type satlin(Type n);
Type satlins(Type n);
Type logsig(Type n);
Type tansig(Type n);
Type poslin(Type n);
//Type compete()
#endif