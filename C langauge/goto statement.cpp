/*
C supports a unique form of a statement that is the goto Statement which is used to branch unconditionally within a program from one point to another. Although it is not a good habit to use the goto statement in C, there may be some situations where the use of the goto statement might be desirable.

The goto statement is used by programmers to change the sequence of execution of a C program by shifting the control to a different part of the same program.
*/

#include <stdio.h>
  
// function to check even or not
void checkEvenOrNot(int num)
{
    if (num % 2 == 0)
        // jump to even
        goto even; 
    else
        // jump to odd
        goto odd; 
  
even: //label name
    printf("%d is even", num);
    // return if even
    return; 
odd: //label name
    printf("%d is odd", num);
}
  
int main() {
    int num = 26;
    checkEvenOrNot(num);
    return 0;
}
