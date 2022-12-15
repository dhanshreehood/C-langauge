/*
 do while loops are very similar to the while loops, but it always executes the code block at 
 least once and furthermore as long as the condition remains true. This is an exit-controlled loop.
*/

#include<stdio.h>
 
int main ()
{
   /* local variable Initialization */   int n = 1,times=5;

   /* do loops execution */   do
   {
       printf("C do while loops: %d\n", n);
       n = n + 1;
   }while( n <= times );
 
   return 0;
}
