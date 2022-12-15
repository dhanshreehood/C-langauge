/* DATATYPES
A data-type in C programming is a set of values and is determined to act on those values. C provides various types of data-types which allow the programmer to select the appropriate type for the variable to set its value.

The data-type in a programming language is the collection of data with values having fixed meaning as well as characteristics. Some of them are an integer, floating point, character, etc. Usually, programming languages specify the range values for given data-type.

C Data Types are used to:

Identify the type of a variable when it declared.
Identify the type of the return value of a function.
Identify the type of a parameter expected by a function.
*/

/* ANSI C provides three types of data types:

1. Primary(Built-in) Data Types:
void- As the name suggests, it holds no value and is generally used for specifying the type of function or what it returns. If the function has a void type, it means that the function will not return any value;
, int, char, double and float.
EX. 
int    age;
char   letter;
float  height, width;

2. Derived Data Types:
Array, References, and Pointers.

Data Types  	Description
Arrays	        Arrays are sequences of data items having homogeneous values. They have adjacent memory locations to store values.
References	    Function pointers allow referencing functions with a particular signature.
Pointers	    These are powerful C features which are used to access the memory and deal with their addresses.


3. User Defined Data Types: C allows the feature called type definition which allows programmers to define their identifier that would represent an existing data type. There are three such types:
Structure, Union, and Enumeration.

Data Types	    Description
Structure	    It is a package of variables of different types under a single name. This is done to handle data efficiently. "struct" keyword is used to define a structure.
Union	        These allow storing various data types in the same memory location. Programmers can define a union with different members, but only a single member can contain a value at a given time. It is used for
Enum	        Enumeration is a special data type that consists of integral constants, and each of them is assigned with a specific name. "enum" keyword is used to define the enumerated data type.
*/

/*
#include <stdio.h>
int main()
{
    int a = 4000; // positive integer data type
    float b = 5.2324; // float data type
    char c = 'Z'; // char data type
    long d = 41657; // long positive integer data type
    long e = -21556; // long -ve integer data type
    int f = -185; // -ve integer data type
    short g = 130; // short +ve integer data type
    short h = -130; // short -ve integer data type
    double i = 4.1234567890; // double float data type
    float j = -3.55; // float data type
}
*/

/*
-The storage representation and machine instructions differ from machine to machine. sizeof operator can use to get the exact size of a type or a variable on a particular platform.
 

#include <stdio.h>
#include <limits.h>
int main()
{
    printf("Storage size for int is: %d \n", sizeof(int));
    printf("Storage size for char is: %d \n", sizeof(char));
    return 0; 
}
*/