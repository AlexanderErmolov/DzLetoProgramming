/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4};  
    
    for(int i = 0; i < 4; i++)
    {
        array[i] = array[i] * 2;
    }
    // выводим элементы массива на консоль
    for(int i = 0; i < 4; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}
