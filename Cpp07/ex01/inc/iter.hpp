#pragma once
#include <string>
#include <iostream>
#include <defines.h>

template<typename T, typename Func>
void iter(T* array, size_t length,  Func func) {
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

template<typename T>
void process(T& value) {
    value++;
}

// Specialization for std::string so we can inrement the string
template<>
void process<std::string>(std::string& value) {
    value += "_incremented";
}

// template<typename T>
// void print(T& value) {
//     std::cout << CYAN << value << RESET << " ";
// }
