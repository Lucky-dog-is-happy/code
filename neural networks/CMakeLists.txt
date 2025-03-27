cmake_minimum_required(VERSION 3.10)
project(Neural_networks VERSION 0.1 LANGUAGES CXX)

add_executable(${PROJECT_NAME}
    src/main.cc
    src/transfer_function.cc
)

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)



