/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int n = 7;
    for(int i =0; i < n; i++){
        for(int j = 0; j< n; j++){
            if(j==i || j == n-i-1) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}