/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int calculate(int m, int n)
{
    if(m > n)
    {
        return m - n;
    }
    else
    {
        return m + n;
    }
}
 
int main(void)
{
    int result1 = calculate(-10,2);
    printf("%d \n", result1);
    int result2 = calculate(10,-2);
    printf("%d \n", result2);
    return 0;
}
