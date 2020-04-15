//Unlike Python, C++ requires a main function to be defined. The main function
//is of type 'int', meaning that it will return an integer to the caller.
//Typically, main will return either a 1 or a 0. A return 0 means that the 
//program has executed correctly. The programmer can chose to return other
//non-zero integers to indicate the program exited abnormally. If the user
//does not define return 0, the compiler will insert the statement 
//automatically.

#include <iostream>

//Your c++ program must contain a int main() function definition. The
//return is optional. Another valid function signiture is:
//
// int main(int argc, char* argv[])
// Google search for more details.

int main()
{
    std::cout << "Inside the main function \n"
    return 0;
}