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
         cout<<"Please choose a number from 1 to 3:";
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

            default:
              cout<<"Invalid Input";     
         }

      case 2:
        cout<<"Q1. What is C++ ?"<<endl;
        cout<<"Q2. What is source file in C++ ?"<<endl;
        cout<<"Q3. How iostream file works in C++ ?"<<endl;

        int b;
        cout<<"Please choose a number from 1 to 3:";
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
        }

          


    }
    

}

main(){
    course obj;
    obj.result();
}