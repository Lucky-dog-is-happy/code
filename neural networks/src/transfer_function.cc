#include "transfer_function.hh"

namespace TransferFunction
{
    const std::array<std::string, FunctionCount> FunctionNames = {
        "hardlim", "hardlims",
        "purelin", "satlin",
        "satlins", "logsig",
        "tansig", "poslin"};

    ValueType hardlim(ValueType n)
    {
        return (n >= 0) ? 1 : 0;
    }

    ValueType hardlims(ValueType n)
    {
        return (n >= 0) ? 1 : -1;
    }

    ValueType purelin(ValueType n)
    {
        return n;
    }

    ValueType satlin(ValueType n)
    {
        if (n < 0)
            return 0;
        else if (n > 1)
            return 1;
        else
            return n;
    }

    ValueType satlins(ValueType n)
    {
        if (n < -1)
            return -1;
        else if (n > 1)
            return 1;
        else
            return n;
    }

    ValueType logsig(ValueType n)
    {
        return 1.0 / (1.0 + std::exp(-n));
    }

    ValueType tansig(ValueType n)
    {
        return (std::exp(n) - std::exp(-n)) / (std::exp(n) + std::exp(-n));
    }

    ValueType poslin(ValueType n)
    {
        return (n >= 0) ? n : 0;
    }
}