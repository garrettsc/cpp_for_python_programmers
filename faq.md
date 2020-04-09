# Frequently Asked Questions (At least by me)

Questions I asked myself while learning C++. The goal here is to ask meaningful questions and provide concise answers. I would also like to link pieces of relavent code for both Python and C++ to reinforce concepts.

## Pass by reference or pass by value?
There are two ways to pass data from one function to another. You can pass by value which, traditional texts will tell you, creates a copy of the passed data. Once the function call has ended / gone out of scope, the copied variable will be discarded automatically. From what I can tell, passing by value does not take a huge performance penalty for built in types. Take a int for example. You pass a byte, or several bytes, to a function where copies are made and discarded. A few bytes, no big deal. When passing large blocks of memory, such as vectors or strings, passing by reference begins to look more attractive. Passing by reference passes the memory location of an object to the function. This will be in the order of bytes, even for an object that takes up Gb worth of memory. The problem with pass by reference, however, is that the object can be modified unless care is taken. You can protect the object by using the const keyword. This tells the function, "I'm passing you the address of the object, you're free to look at said object, but you can not modify it." 

Where this falls apart for me currently is in my custom classes. If I create a class with some private members that are accessible through public functions, I find that if I pass the object as a const reference to an external function, I get an error.

[Is it better in C++ to pass by value or pass by constant reference?](https://stackoverflow.com/questions/270408/is-it-better-in-c-to-pass-by-value-or-pass-by-constant-reference)

 ## What is the difference between interpreted and compiled?
 ## What is encapsulation?
 ## What is a field?
 ## What does 'public' and 'private' mean?
 ## What is the '::' operator called?
 ## What is the difference between '::' and '.'?
 ## What is the difference between single and double quotes?
 ## How do you group code?
 ## Does whitespace count?
 ## What is function overloading?
 ## What is 'using namespace std' and why is it bad practice?
 ## What language should I chose for my project?
 ## How do I interpret error messages?
