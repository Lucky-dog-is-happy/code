#include <iostream>
#include <vector>
#include <cmath>
#include "transfer_function.hh"

using namespace TransferFunction;

ValueType cal_input(ValueType w, ValueType p, ValueType b)
{
    return w * p + b;
}

void find_functions(ValueType w, ValueType p, ValueType b, ValueType output)
{
    const ValueType n = cal_input(w, p, b);

    const std::array<ValueType, FunctionCount> f_arr = {
        hardlim(n), hardlims(n),
        purelin(n), satlin(n),
        satlins(n), logsig(n),
        tansig(n), poslin(n)};

    for (int i = 0; i < FunctionCount; ++i)
    {
        if (std::abs(output - f_arr[i]) < 0.001)
        {
            std::cout << FunctionNames[i] << std::endl;
        }
    }
}

int main()
{
    // 示例：查找输出接近 0.7 的激活函数
    find_functions(1.0, 0.5, -0.2, 0.7);

    // 测试输入计算
    const ValueType result = cal_input(2.0, 3.0, 1.0);
    std::cout << "Input calculation result: " << result << std::endl;

    return 0;
}