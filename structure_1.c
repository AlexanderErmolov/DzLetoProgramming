/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct employee
{
    char *name;
    int age;
    double salary;
};
int main(void)
{
    struct employee sam = {"Sam", 23, 4500};
    printf("Name: %s\n", sam.name);
    printf("Age: %d\n", sam.age);
    printf("Salary: %.2f\n", sam.salary);
    return 0;
}