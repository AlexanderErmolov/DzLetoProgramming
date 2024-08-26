/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    const long n = 1000;
    const long *pn = &n;
 
    char *const hello = "Hello";
 
    printf("Constant: %ld\n", *pn);
    printf("Constant pointer: %s\n", hello);
    return 0;
}