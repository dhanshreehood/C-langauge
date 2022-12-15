//If else statements in C is also used to control the program flow based on some condition, only the difference is: it's used to execute some statement code block if the expression is evaluated to true, otherwise executes else statement code block.

#include<stdio.h>

main()
{
  int a, b;

  printf("Please enter the value for a:");
  scanf("%d", &a);

  printf("\nPlease the value for b:");
  scanf("%d", &b);

  if (a > b) {  
    printf("\n a is greater");
  } else {  
    printf("\n b is greater");
  }
}
