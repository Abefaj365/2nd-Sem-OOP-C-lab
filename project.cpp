// Simple Learning Course Project

#include <iostream>
using namespace std;
class course
{
    public:
    void result();
};

void course::result()
{
    cout<<"Chapters : "<<endl;
    cout<<"1.Principle of Object-Oriented Programming"<<endl;
    cout<<"2.Beginning with C++"<<endl;
    cout<<"3.Tokens, Expressions and Control Structures "<<endl;
    cout<<"4.Functions in C++"<<endl;

    int n;
    cout<<"Please choose any chapter which you want to learn (Selection must be on 1 to 4) : ";
    cin>>n;

    switch(n){

      case 1:
         cout<<"Q1. What is Software Evaluation?"<<endl;
         cout<<"Q2. What is Procedure Oriented Programming?"<<endl;
         cout<<"Q3. What is Data Abstraction and Encapsulation?"<<endl;

         int a;
         cout<<"Please choose a number between 1 to 3:";
         cin>>a;

         switch(a){
            case 1:
              cout<<"Software evaluation is the process of assessing software to determine its quality, effectiveness, and suitability for a specific purpose. The evaluation typically involves a series of tests, analyses, and comparisons that help identify strengths, weaknesses, and areas for improvement in the software. Organizations, developers, and users may conduct evaluations at various stages of the software's lifecycle to ensure it meets technical standards, user needs, and performance requirements";
              break;

            case 2:
              cout<<"Procedure-Oriented Programming (POP) is a programming paradigm centered on the concept of procedures, also known as routines, functions, or subroutines. POP is structured around a sequence of procedures that operate on data to achieve specific tasks or solve problems. It's one of the earliest and most widely-used paradigms, and languages like C, Fortran, and BASIC are examples of POP languages.";
              break;

            case 3:
              cout<<"Data Abstraction and Encapsulation are two fundamental concepts in Object-Oriented Programming (OOP), both aimed at making software more modular, maintainable, and secure. They are often used together but have distinct roles in structuring and protecting data within a program.\n\nData Abstraction is the process of hiding the implementation details of an object and exposing only the essential features relevant to the user.\n\nEncapsulation is the bundling of data (attributes) and methods (functions) that operate on that data into a single unit, usually a class. Encapsulation restricts direct access to some of an object's components, which is essential for safeguarding data integrity. " ;
              break;

            default:
              cout<<"Invalid Input";
              break;     
         }
              break;
      case 2:
        cout<<"Q1. What is C++ ?"<<endl;
        cout<<"Q2. What is source file in C++ ?"<<endl;
        cout<<"Q3. How iostream file works in C++ ?"<<endl;

        int b;
        cout<<"Please choose a number between 1 to 3:";
        cin>>b;

        switch(b){
            case 1:
              cout<<"C++ is a high-level programming language that was developed as an extension of the C language by Bjarne Stroustrup in the early 1980s. It was designed to provide the efficiency and control of C, while also introducing support for object-oriented programming (OOP) principles, making it more versatile for developing complex software. C++ is widely used in various applications, including system/software development, game development, real-time simulations, and high-performance applications due to its speed and efficiency.";
            break;

            case 2:
              cout<<"In C++, a source file is a file where the actual code (source code) for a program is written. Source files typically have the extension .cpp and contain the main logic, functions, classes, and algorithms that define the program's behavior.";
            break;

            case 3:
              cout<<"The iostream file in C++ is a header file that provides input and output (I/O) functionality using streams. It is part of the C++ Standard Library and includes definitions for handling input and output operations, such as reading from the keyboard and writing to the console. iostream is crucial for handling basic I/O operations in C++ and simplifies the way data is read and written in programs.\n\nThe <iostream> file in C++ is essential for handling input and output operations. It provides predefined objects (std::cout, std::cin, std::cerr, std::clog) and operators (<<, >>) for simple, flexible, and efficient data handling. Through stream buffering, automatic type handling, and error management, iostream supports robust and straightforward I/O in C++ applications.";
            break;

            default:
              cout<<"Invalid Input";
              break;    
        }
              break;

       case 3:
         cout<<"Q1. What is Identifiers and Constants in C++ ?"<<endl;
         cout<<"Q2. What is Memory management operators in C++ ?"<<endl;
         cout<<"Q3. What is Operator Overloading ?"<<endl;
         cout<<"Q4. What is Implicit Conversions in C++ ?"<<endl;
         cout<<"Q5. What is Operator Precedence ?"<<endl; 

         int c;
         cout<<"Please choose a number between 1 to 5:";
         cin>>c;

         switch(c){
            case 1:
              cout<<"In C++, identifiers and constants play crucial roles in defining and managing data.Identifiers are names given by the programmer to variables, functions, classes, and other elements in the program. They allow you to refer to data and structures meaningfully. An identifier in C++ must begin with a letter (either uppercase or lowercase) or an underscore (_) and may contain letters, digits, and underscores. However, identifiers cannot be C++ reserved keywords like int, float, if, or else. C++ treats identifiers as case-sensitive, meaning myVariable and MyVariable would be recognized as distinct identifiers.Constants, on the other hand, are fixed values that do not change during the program’s execution.\n\nIn C++, constants are typically defined using the const keyword or #define preprocessor directive. Using const before a variable type (e.g., const int age = 18;) declares a constant, ensuring that its value remains the same. Constants improve code readability and maintainability by giving meaningful names to fixed values and preventing accidental modifications.";
            break;

            case 2:
              cout<<"In C++, memory management operators are used to allocate and deallocate memory dynamically at runtime. These operators allow you to control how memory is used during the execution of a program, which is essential when the memory requirements are not known at compile time. The primary memory management operators in C++ are new and delete" ;
            break;

            case 3:
              cout<<"In C++, operator overloading allows programmers to redefine the behavior of operators (like +, -, *, =, etc.) for user-defined data types (like classes or structs). This enables the use of these operators with objects in a way that’s intuitive and consistent with their behavior on built-in types, such as integers or floats.";
            break; 

            case 4:
              cout<<"In C++, implicit conversions (also known as type conversions or type coercions) are automatic conversions from one data type to another. The compiler performs these conversions without the programmer’s explicit instructions. This feature allows for flexibility in working with mixed types in expressions, but it also requires careful understanding to avoid unintended consequences.";
            break;

           case 5:
             cout<<"Operator precedence refers to the order in which operators are evaluated in expressions that contain multiple operators. Operators with higher precedence are evaluated before operators with lower precedence. Understanding operator precedence helps avoid unintended results in complex expressions.";
           break;

           default:
             cout<<"Invalid Input";
             break;         
         }
             break;
         case 4:
           cout<<"Q1. What is Function Prototyping ?"<<endl;
           cout<<"Q2. Define Call By Reference."<<endl;
           cout<<"Q3. What is Inline Functions ?"<<endl;
           cout<<"Q4. Discuss about Friend and Virtual Functions."<<endl;

           int d;
           cout<<"Please choose a number between 1 to 4:";
           cin>>d;

           switch(d){
            case 1:
              cout<<"In C++, function prototyping is the practice of declaring a function before it is defined or called. A function prototype provides the compiler with essential information about a function, such as its name, return type, and parameter types, without including the actual function body. This allows the function to be used before the compiler encounters its full definition.";
            break;

            case 2:
              cout<<"In C++, call by reference (or pass by reference) is a method of passing arguments to a function so that the function can directly modify the original variables. When a function parameter is passed by reference, the parameter becomes an alias for the actual argument, allowing any changes made to the parameter within the function to affect the original variable.";
            break;

            case 3:
              cout<<"An inline function is a function for which the compiler attempts to expand the function's code directly at each place it is called, instead of generating a regular function call. This can reduce function call overhead, especially in small, frequently-used functions, by eliminating the time needed to jump to the function’s location and return.";
            break;

            case 4:
              cout<<"A friend function is a function that is not a member of a class but has access to its private and protected members. Friend functions are useful for enabling certain functions to access the internals of a class without being a member of that class.\n\nA virtual function is a member function in a base class that can be overridden in derived classes. Virtual functions enable polymorphism, allowing a program to determine which function to execute at runtime based on the type of the object being referenced or pointed to.";
            break;

            default:
              cout<<"Invalid Input";
              break;        
           }
              break;

           default:
              cout<<"Invalid Input";
                
    }
    
}

main(){
    course obj;
    obj.result();
} 