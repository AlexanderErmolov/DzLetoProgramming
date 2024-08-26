/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

enum color
{
    RED,
    GREEN,
    BLUE
};
int main(void)
{
    enum color myColor = RED;
    switch(myColor)
    {
        case RED:
            printf("Red");
            break;
        case GREEN:
            printf("Green");
            break;
        case BLUE:
            printf("Blue");
            break;
    }
    return 0;
}
