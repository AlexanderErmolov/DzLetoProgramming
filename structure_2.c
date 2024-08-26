/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

typedef struct
{
    char *name;
    int age;
    double salary;
} employee;
 
int main(void)
{
    employee tom = {"Tom", 38, 5500};
    employee sam = {"Alex", 22, 7500};
    printf("Name: %s \t Age: %d \t Salary: %.2f\n", tom.name, tom.age, tom.salary);
    printf("Name: %s \t Age: %d \t Salary: %.2f\n", sam.name, sam.age, sam.salary);
    return 0;
}
