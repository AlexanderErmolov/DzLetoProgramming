/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int *x1, int *x2)
{
    int temp = *x1;
    *x1 = *x2;
    *x2=temp;
}
int main(void)
{
    int y = -10;
    int z = 10;
    swap(&y, &z);
    printf("y=%d \t z=%d \n", y, z);
    return 0;
}
