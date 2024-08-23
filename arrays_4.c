/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int array[] = {1, 2, 3, 4, 5};
 
    int n = sizeof(array) / sizeof(array[0]);
    
    int m = n / 2; 
    for(int i = 0; i < m; i++)
    {
        int array2 = array[i];
        array[i] = array[n-i-1];
        array[n-i-1] = array2;
    }
      for(int i = 0; i < n; i++)
    {
        printf("%d", array[i]);
    }
    return 0;
}
