/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    char buffer[10];
    int count;
    double price;
    printf("Input count and price:");
    if (fgets(buffer, 10, stdin) != NULL)
    {
        sscanf(buffer, "%d %lf", &count, &price);
        printf("Price: %.2lf \tCount: %d \n", price, count);
    }
    else
    {
        printf("Fatal Error!\n");
    }
    return 0;
}
