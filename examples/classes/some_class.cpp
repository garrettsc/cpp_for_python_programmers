//some_class.cpp
//This is the the library file for some_class
//Library files contain the definition of classes or functions

//Note that we include the header file some_class.h which contains the class
//declaration. 

#include "some_class.h"
#include <iostream>

//With the declaration included, we can define the methods or
//values accordingly.
void SomeClass::foo()
{
    std::cout << "Foo!\n";
}

