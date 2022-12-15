#include <stdio.h>

/* global variable definition */int z;

int main ()
{
    /* local variable definition and initialization */    int x,y;
     
    /* actual initialization */    x = 20;
    y = 30;
    z = x + y;
     
    printf ("value of x = %d, y = %d and z = %d\n", x, y, z);
     
    return 0;
}
