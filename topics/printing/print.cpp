//C++ requires an "import" to provide printing functionality to the program.
//This "import" is different than the imports in Python. When you import
//a library, class, or objects in Python, you are essentially loading those
//objects into memory for the Python interpreter to use later on during 
//evaluation. Here, the #include statement, is telling the linker to link
//the iostream pre-compiled binary after compilation is complete. 

#include <iostream>
#include <string>

int main()
{
    // Insert the string literal into the cout (pronounced see-out)
    // Note, unlike Python, the newline character must be explicit
    std::cout << "Hello World \n";

    // Here we leave out the endline character
    std::cout << "Hello world, again ";

    //Printing with formatting
    //Note that here we use the std::endl statement - this is equivalent to
    //the end line character.
    std::string some_string = "cruel";
    std::cout << "Hello " << some_string << " world" << std::endl;
    
}