/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int x;
    double y;
    
    printf("x:");
    scanf("%d", &x);

    printf("y:");
    scanf("%lf", &y);
    printf("x: %d \ny: %.2lf \t", x, y);
    
    return 0;
}