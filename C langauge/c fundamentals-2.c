/* TOKENS
each word and punctuation is referred to as a token. C Tokens are the smallest building block or smallest unit of a C program.
-The compiler breaks a program into the smallest possible units and proceeds to the various stages of the compilation, which is called token.
*/

/* TYPES OF TOKENS:
1.Identifiers
2.Keywords
3.Constants
4.Strings
5.Operators
6.Special Symbols
*/

/* 1. IDENTIFIERS
-Identifiers are names given to different entities such as constants, variables, structures, functions, etc.
EX.
int number;
ch string;

here 'int' and 'ch' are KEYWORDS, and 'number' and 'string' are IDENTIFIERS.
*/

/* RULES FOR IDENTIFIERS
-An identifier can only have alphanumeric characters (a-z , A-Z , 0-9) (i.e. letters & digits) and underscore( _ ) symbol.
-Identifier names must be unique
-The first character must be an alphabet or underscore.
-You cannot use a keyword as identifiers.
-Only the first thirty-one (31) characters are significant.
-It must not contain white spaces.
-Identifiers are case-sensitive.
*/

/*TYPES OF IDENTIFIERS
1. Internal identifier
2. External identifier

Internal Identifier-
If the identifier is not used in the external linkage, then it is known as an internal identifier. The internal identifiers can be local variables.

External Identifier-
If the identifier is used in the external linkage, then it is known as an external identifier. The external identifiers can be function names, global variables.
*/

/* DIFFERENCE BETWEEN KEYWORD AND IDENTIFIER
Keyword	                                           Identifier

-Keyword is a pre-defined word.	                   -The identifier is a user-defined word
-It must be written in a lowercase letter.	       -It can be written in both lowercase and uppercase letters.
-Its meaning is pre-defined in the c compiler.	   -Its meaning is not defined in the c compiler.
-It is a combination of alphabetical characters.   -It is a combination of alphanumeric characters.
-It does not contain the underscore character.	   -It can contain the underscore character.

*/

/* 2. KEYWORDS-
The C Keywords must be in your information because you can not use them as a variable name.
-You can't use a keyword as an identifier in your C programs, its reserved words in C library and used to perform an internal operation. The meaning and working of these keywords are already known to the compiler.
*/

/*A list of 32 reserved keywords in c language :
auto	double	int	struct
break	else	long	switch
case	enum	register	typedef
char	extern	return	union
const	float	short	unsigned
continue	for	signed	void
default	goto	sizeof	volatile
do	if	static	while
*/

/* 3. CONSTANTS:
Constants are like a variable, except that their value never changes during execution once defined.

-Constants are also called literals.
-Constants can be any of the data types.
-It is considered best practice to define constants using only upper-case names.
EX.
#include<stdio.h>
main()
{
  const int SIDE = 10;
  int area;
  area = SIDE*SIDE;
  printf("The area of the square with side: %d is: %d sq. units"
  , SIDE, area);
}

-Putting const either before or after the type is possible.

int const SIDE = 10;
or

const int SIDE = 10;

-Constants are categorized into two basic types, and each of these types has its subtypes/categories. These are:

-Primary Constants
    1.Numeric Constants
        i. Integer Constants-It's referring to a sequence of digits. Integers are of three types viz:
            a.Decimal Integer
            b.Octal Integer
            c.Hexadecimal Integer
                ex. 15, -265, 0, 99818, +25, 045, 0X6

        ii. Real Constants-The numbers containing fractional parts like 99.25 are called real or floating points constant.

    2. Character Constants
        i. Single Character Constants-It simply contains a single character enclosed within ' and ' (a pair of single quote). It is to be noted that the character '8' is not the same as 8. Character constants have a specific set of integer values known as ASCII values (American Standard Code for Information Interchange).
            ex. X', '5', ';'

        ii. String Constants-These are a sequence of characters enclosed in double quotes, and they may include letters, digits, special characters, and blank spaces. It is again to be noted that "G" and 'G' are different - because "G" represents a string as it is enclosed within a pair of double quotes whereas 'G' represents a single character.
            ex. "Hello!", "2015", "2+1"

        iii. Backslash Character Constants-The lists of backslash characters have a specific meaning which is known to the compiler. They are also termed as "Escape Sequence".
            ex. \t is used to give a tab
                \n is used to give a new line
          
*/

/* OPERATORS
C operators are symbols that are used to perform mathematical or logical manipulations. The C programming language is rich with built-in operators. Operators take part in a program for manipulating data and variables and form a part of the mathematical or logical expressions.
TYPES:
    1. Arithmetic Operators-used to performing mathematical calculations like addition (+), subtraction (-), multiplication (*), division (/) and modulus (%).
    EX. 
    #include <stdio.h>
void main()
{
 int i=3,j=7,k; // Variables Defining and Assign values 
 k=i+j;
 printf("sum of two numbers is %d\n", k); 
}

    2. Relational Operators-used to comparing two quantities or values.
Operator	Description
==	        Is equal to
!=	        Is not equal to
>	        Greater than
<	        Less than
>=	        Greater than or equal to
<=	        Less than or equal to

    3. Logical Operators- To test more than one condition to make decisions. These are: && (meaning logical AND), || (meaning logical OR) and ! (meaning logical NOT).

    4. Assignment Operators- applied to assign the result of an expression to a variable.
Operator	Description
=	        Assign
+=	        Increments then assign
-=	        Decrements then assign
*=	        Multiplies then assign
/=	        Divides then assign
%=	        Modulus then assign
<<=	        Left shift and assign
>>=	        Right shift and assign
&=	        Bitwise AND assign
^=	        Bitwise exclusive OR and assign
|=	        Bitwise inclusive OR and assign

    5. Increment and Decrement Operators-Increment and Decrement Operators are useful operators generally used to minimize the calculation, i.e. ++x and x++ means x=x+1 or -x and x−−means x=x-1.
Operator	Description
++	        Increment
−−	        Decrement

    6. Conditional Operator-C offers a ternary operator which is the conditional operator (?: in combination) to construct conditional expressions.
Operator	Description
? :	        Conditional Expression

    7. Bitwise Operators-C provides a special operator for bit operation between two variables.
Operator	Description
<<	        Binary Left Shift Operator
>>	        Binary Right Shift Operator
~	        Binary Ones Complement Operator
&	        Binary AND Operator
^	        Binary XOR Operator
|	        Binary OR Operator


    8. Special Operators-
Operator	Description
sizeof()	 Returns the size of a memory location.
&	 Returns the address of a memory location.
*	 Pointer to a variable.


*/

/*

*/
