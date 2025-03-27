cmake_minimum_required(VERSION 3.10)
project(neural_networks VERSION 0.1 LANGUAGES CXX)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含头文件目录
include_directories(include)

# 收集所有源文件
set(SOURCES 
    src/transfer_function.cc
    src/main.cc
)
# 创建可执行文件
add_executable(neural_networks ${SOURCES})