/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    int age;
    char name[25];
    printf("Enter your name: ");
    scanf("%10[^\n]", name);
    
    printf("Your age: ");
    scanf("%d", &age);
     
    printf("Name: %s \n", name);
    
    printf("Age = %d", age);
    return 0;
}

