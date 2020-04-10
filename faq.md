# Frequently Asked Questions (At least by me)

Questions I asked myself while learning C++. The goal here is to ask meaningful questions and provide concise answers. I would also like to link pieces of relavent code for both Python and C++ to reinforce concepts.

## Pass by reference or pass by value?
There are two ways to pass data from one function to another. You can pass by value which, traditional texts will tell you, creates a copy of the passed data. Once the function call has ended / gone out of scope, the copied variable will be discarded automatically. From what I can tell, passing by value does not take a huge performance penalty for built in types. Take a int for example. You pass a byte, or several bytes, to a function where copies are made and discarded. A few bytes, no big deal. When passing large blocks of memory, such as vectors or strings, passing by reference begins to look more attractive. Passing by reference passes the memory location of an object to the function. This will be in the order of bytes, even for an object that takes up Gb worth of memory. The problem with pass by reference, however, is that the object can be modified unless care is taken. You can protect the object by using the const keyword. This tells the function, "I'm passing you the address of the object, you're free to look at said object, but you can not modify it." 


[Is it better in C++ to pass by value or pass by constant reference?](https://stackoverflow.com/questions/270408/is-it-better-in-c-to-pass-by-value-or-pass-by-constant-reference)

## Pass a const object reference, but cannot use methods?

You have defined a class that contains fields, getters, and setters. You pass an instance of the class to a function as a const reference. Inside the function you try call a getter, but you are met with this error:

```
the object has type qualifiers that are not compatible with the member function
```
One way you can get this error is if you have a const instance of a class and you try and call a non-const method on the class. 

 ## Why 'this->' and not (this.)?
 I do not have an answer to this, and it is actually pretty frustrating. The 'this' keyword is analogous to the 'self' keyword in Python. Essentially, these keywords are pointers that reference the class instance that called them. i.e if you called a method on a class instance in either language you could say **S.some_method()**, and it would perform some_method ON **S**. In the class definition, Python is consistent and refer to functions as **self.some_method**, but C++ does not. C++ uses the **this->some_function()**. It might have something to do with the fact the pointer is optional in C++, but why not use the same binary operator?

 **reserved word not keyword**


 ## When should a method be declared const?
 Any method that is not intended to modify an object should be declared const. Declaring a methond const prevents any fields from being modified.

 ## What is the difference between a function definition and a declaration?
 A good answer to this question can be found [here](https://stackoverflow.com/questions/1410563/what-is-the-difference-between-a-definition-and-a-declaration).

 In summary, a declaration tells the compiler the type and name of an identifier so memory can be allocated. A definition implements the identifier. 
 

 ## What is the difference between interpreted and compiled?
 ## What is encapsulation?
 ## What is a field?
 ## What does 'public' and 'private' mean?


 ## What is the '::' operator called?
 The **::** operator is called the **scope resolution operator**. 

 ## What does std stand for?
 Standard. std references the 'standard' namespace. std is used in the binary scope resolution operator **::** which is described [here](what-is-the-'::'-operator-called?)


 ## What is the difference between '::' and '.'?
 ## What is the difference between single and double quotes?
 ## How do you group code?
 ## Does whitespace count?
 ## What is function overloading?
 ## What is 'using namespace std' and why is it bad practice?
 ## What language should I chose for my project?
 ## How do I interpret error messages?
