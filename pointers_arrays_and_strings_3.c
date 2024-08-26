/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[] = {3, 4, 5, 6, 7};
    
    int *p = array;
    p = p + 2;
    printf("array[2] = %d\n", *p);
    p = p + 1;
    printf("array[3] = %d\n", *p);
    
    return 0;
}
