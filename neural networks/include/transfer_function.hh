// transfer_function.hh
#ifndef TRANSFER_FUNCTION_HH
#define TRANSFER_FUNCTION_HH

#include <string>
#include <array> // C++11 更安全的数组
#include <cmath>

// 使用 using 代替宏定义
using ValueType = double;

// 命名空间封装
namespace TransferFunction
{
    // 常量表达式定义
    constexpr int FunctionCount = 8;

    // 使用 std::array 替代原生数组
    extern const std::array<std::string, FunctionCount> FunctionNames;

    // 函数声明
    ValueType hardlim(ValueType n);
    ValueType hardlims(ValueType n);
    ValueType purelin(ValueType n);
    ValueType satlin(ValueType n);
    ValueType satlins(ValueType n);
    ValueType logsig(ValueType n);
    ValueType tansig(ValueType n);
    ValueType poslin(ValueType n);
} // namespace TransferFunction

#endif