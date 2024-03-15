# Usage of pointers and references

In this project we gonna understand what are references, how to create them
, how to make the difference between the ussage of pointers and references.


## What are references?
    A reference variable is an alias, that is, another name for an already 
    existing variable. Once a reference is initialized with a variable, either the 
    variable name or the reference name may be used to refer to the variable.


## References vs Pointers

    References are often confused with pointers but three major differences between references and pointers are:

    1. You cannot have NULL references. You must always be able to assume that a reference is connected to a legitimate piece of storage.
    2. Once a reference is initialized to an object, it cannot be changed to refer to another object. Pointers can be pointed to another object at any time.
    3. A reference must be initialized when it is created. Pointers can be initialized at any time.


    Creating References in C++
    Think of a variable name as a tag affixed to the variable's memory location. 
    Similarly, you can envision a reference as another tag linked to that same 
    memory location. As a result, you can access the variable's contents using 
    either the original variable name or the reference.

    For instance, consider the following scenario:

    int i = 42;

    We can declare reference variables for i as follows.

    int& j = i;

    The ampersand symbol is this declaration we can read as a reference. So if we
    read all the declaration will be j is an integer reference initialised to i.

    References are usually used for function argument lists and function return 
    values. In C we have learned how we implement call by reference concept using 
    pointers. here is a link of another example of call by reference which makes 
    use of C++ reference syntax https://www.tutorialspoint.com/cplusplus/passing_parameters_by_references.htm.

    Returning values by reference in C++.
    Using references instead of pointers can enhace the readability and
    maintainability of a c++ program. In a similar manner to returning a pointer, a
    C++ function can return a reference.
    When  a function returns a refference, it effectively provides an implicit 
    pointer to its return value. Consequently, the function can be utilized on the
    on the left side of an assignment statement.
    Here is a live example:
    https://www.tutorialspoint.com/compile_cpp_online.php
    Just be careful when returning a reference, because the object being referred 
    to does not go out of scope, so it is a mistake to return a reference to local 
    variable. But we can always return a reference on a static variable:

    int& func() {
    int q;
    //! return q; // Compile time error
    static int x;
    return x;     // Safe, x lives outside this scope
    }



    For the exercise ex03 we have to think about In which case it would would be best to use a pointer to Weapon? And a reference to Weapon? Why?.

    Usage of Pointers
    Using a pointer to 'Weapon' allows for more flexibility, especially when 
    dealing with situations where the object might not always exist or when 
    ownership needs to be transferred. In the case of 'HumanB', where the 'Weapon' 
    is not always present, using a pointer would be beneficial because you can 
    dynamically allocate memory for the 'Weapon' object only when needed. This 
    avoids unnecessary memory consumption when a 'Weapon' is not required.

    class HumanB {
    private:
        Weapon* weapon;
        std::string name;
    public:
        HumanB(std::string n) : name(n), weapon(nullptr) {}
        // Other member functions...
    };

    When a 'Weapon' is needed, we can created it dynamically:
    void HumanB::setWeapon(const Weapon& w) {
        if (weapon != nullptr) {
            delete weapon; // Release the previous weapon, if any
        }
        weapon = new Weapon(w); // Create a new weapon
    }

    Usage of References:
    Using a reference to 'Weapon' is suitable when the 'Weapon' object always 
    exists and doesn't change after initialization. In the case of 'HumanA', where 
    the 'Weapon' is provided during object construction and always exists, using a 
    reference ensures that the 'Weapon' cannot be null and simplifies the code.

    class HumanA {
    private:
        const Weapon& weapon;
        std::string name;
    public:
        HumanA(std::string n, const Weapon& w) : name(n), weapon(w) {}
        // Other member functions...
    };

    So a summary for the question made in the ex03:
    When to Use Which:
    * Pointer to Weapon: Use when the presence of the 'Weapon' is optional or when 
    the ownership needs to be transferred. Suitable for scenarios where the 
    'Weapon' object may be created and destroyed dynamically.
    * Reference to Weapon: Use when the 'Weapon' object always exists and doesnt't change after initialization. Suitable for scenarios where the 'Weapon' is provided during object construction and always for the object's functionality.

    In summary, use pointers when the object's existence or ownership is dynamic, and use references when the object is always present and doesn't change after initialization.

# Filestreams (ex04)

Till this point we have ben using iostream std library to read and write to the
console. But we can also read and write to files using filestreams. This requires
the fstream library. The fstream library is a part of the standard C++ library
and is used to read and write to files. This library is used to create files,
update their contents, and perform various other operations related to files.

## Data Types in File Handling & Description
### 1. ios::app
    Append mode. All output to that file to be appended to the end.
### 2. ios::ate
    Open a file for output and move the read/write control to the end of the file.
### 3. ios::in
    Open a file for reading.
### 4. ios::out
    Open a file for writing.
### 5. ios::trunc
    If the file already exists, its contents will be truncated before opening the file.

    We can combine two or more of these values by using the bitwise OR (|) operator.
    For example, if we want to open a file in read and write mode, we can use the
    following syntax:

        std::fstream file("file.txt", std::ios::in | std::ios::out);

    Or if we want to open a file that already exists to write on it but we also
    want to truncate if it already exists we can write smth. like this:

        std::fstream outfile.open("file.dat", std::ios::out | std::ios::trunc);

## Closing a File
    When a C++ programm terminates automatcally flushes all the streams, release
    all the allocated memory and close all the files that were open. But is recommended
    and a good practise that a programmer should close them all before the
    termination of the program.

        void close();

## Writing to a file
    Just as we use std::cout with the symbol << to write something on it we do 
    the same but we dont use the cout object but instead ofstream or fstream 
    objects which stands for ouput file stream and file stream respectively

    ## Read from a File
    As explained above we just use the >> operator instead to get input

    Here you may find a live demo for read and write examples
        https://www.tutorialspoint.com/compile_cpp_online.php

## File Position Pointers
    Both istream and ostream provide member functions for repositioning the file-position pointer. These member functions are seekg ("seek get") for istream and seekp ("seek put") for ostream.

    The argument to seekg and seekp normally is a long integer. A second argument can be specified to indicate the seek direction. The seek direction can be ios::beg (the default) for positioning relative to the beginning of a stream, ios::cur for positioning relative to the current position in a stream or ios::end for positioning relative to the end of a stream.

    The file-position pointer is an integer value that specifies the location in the file as a number of bytes from the file's starting location. Some examples of positioning the "get" file-position pointer are:

        // position to the nth byte of fileObject (assumes ios::beg)
        fileObject.seekg( n );

        // position n bytes forward in fileObject
        fileObject.seekg( n, ios::cur );

        // position n bytes back from end of fileObject
        fileObject.seekg( n, ios::end );

        // position at end of fileObject
        fileObject.seekg( 0, ios::end );

# Pointers to Members functions (ex05)
Pointers to member functions in C++ are special types of pointers that point to 
member functions of a class. They are used to invoke member functions 
dynamically at runtime. Here's a brief overview of how pointers to member 
functions work:
## 1.Syntax
    The syntax fof declaring a pointer to a member functions is slightly different 
    from a regular function pointer. It includes the class name and the function 
    signature.
        returnType (ClassName::*ptrName)(params);
* 'returnType': The return type of the member function.
* 'ClassName': The name of the class containing the member function.
* 'ptrName': The name of the pointer to member function.
* 'params': The parameters of the member function.
## 2.Initialization: 
    You can initialize a pointer to a member function by assigning it the 
    address of the desired member function.
        ptrName = &ClassName::memberFunction;
## 3.Invocation:
    To invoke the member function through the pointer, you need to use the ->* 
    or .* operators, depending on whether you're working with an object or a 
    pointer to an object.
        (object.*ptrName)(params);    // For object
        (ptrToObject->*ptrName)(params);  // For pointer to object
* 'object': An object of the class.
* 'ptrToObject': A pointer to an object of the class.
* 'params':  The parameters to pass to the member function.
Pointers to member functions are useful when you need to select a member function dynamically based on certain conditions or when you need to implement polymorphic behavior without using virtual functions. In the context of the exercise, you'll use pointers to member functions to dynamically select the appropriate comment function based on the severity level passed as a parameter.

### Here's a simple example demonstrating the usage of pointers to member 
    #include <iostream>

    class MyClass {
    public:
        void sayHello() {
            std::cout << "Hello from MyClass!" << std::endl;
        }

        void sayGoodbye() {
            std::cout << "Goodbye from MyClass!" << std::endl;
        }
    };

    int main() {
        MyClass obj;

        // Declare pointers to member functions
        void (MyClass::*ptrHello)();
        void (MyClass::*ptrGoodbye)();

        // Initialize pointers to member functions
        ptrHello = &MyClass::sayHello;
        ptrGoodbye = &MyClass::sayGoodbye;

        // Call member functions through pointers
        (obj.*ptrHello)();  // Output: Hello from MyClass!
        (obj.*ptrGoodbye)(); // Output: Goodbye from MyClass!

        return 0;
    }
In this example:

We have a class MyClass with two member functions: sayHello() and sayGoodbye().
We declare two pointers to member functions: ptrHello and ptrGoodbye.
We initialize these pointers to point to the sayHello() and sayGoodbye() member functions of MyClass.
We call the member functions through the pointers using the special syntax (obj.*ptrName)().

## SWITCH CASES (ex06)
We have to create a program using the class harl from ex05, but instead of if else conditions
we have to use switch cases. 
    here is my function
    void Harl::complain(std::string level) {
        member_func_pointers funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
        if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR") {
            std::cout << INVALID << std::endl;
            return ;
        }
        switch (level[0]) {
            case 'D':
                (this->*funcs[0])();
            case 'I':
                (this->*funcs[1])();
            case 'W':
                (this->*funcs[2])();
            case 'E':
                (this->*funcs[3])();
                return ;
        }
    }
i dont use the break statement here if the first conditions are met only because the ex06
wants use to not print what is before that conditions but to print everything after it.