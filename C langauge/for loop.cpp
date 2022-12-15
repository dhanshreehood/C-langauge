/*
for loops is very similar to a while loops in that it continues to process a block of code until a statement becomes false, 
and everything is defined in a single line. The for loop is also entry-controlled loop.
*/

#include<stdio.h> 
 
int main ()
{
  /* local variable Initialization */  int n,times=5;;
    
   /* for loops execution */   for( n = 1; n <= times; n = n + 1 )
   {
      printf("C for loops: %d\n", n);
   }
 
   return 0;
}
