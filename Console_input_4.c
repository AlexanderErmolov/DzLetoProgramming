/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    float width,height,area;
    printf("Enter the width: ");
    scanf("%f",&width);
    printf("Enter the height: ");
    scanf("%f",&height);
    area=width*height;
    printf("Area of rectangle: %f\n",area);
    return 0;
}
