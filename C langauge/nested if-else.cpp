//Nested if else statements play an important role in C programming, it means you can use conditional statements inside another conditional statement.
/* syntax:
if(test_expression one)
{
   if(test_expression two) {
      //Statement block Executes when the boolean test expression two is true.
   }
}
else
{
    //else statement block
}
*/

#include<stdio.h>

main()
{
int x=20,y=30;

    if(x==20)
    {
        if(y==30)
        {
            printf("value of x is 20, and value of y is 30.");
        }
    }
}
