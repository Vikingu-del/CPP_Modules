#pragma once
#include <string>
#include <iostream>
#include <defines.h>
#include <Array.hpp>

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
    value += " incremented";
}

template<typename T>
void print(T& value) {
    std::cout << CYAN << value << RESET << " ";
}

template<typename T>
std::ostream &operator<<( std::ostream &o, Array<T>& arr ) {
    iter(&arr.getArr(), static_cast<T>(arr.size()), print<T>);
    return o;
}