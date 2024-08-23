/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
  int a = 10, b = 15, c = 12;
  int max = c; 
 
  if(a>b && a>c)
    max=a;
  else if(b>a && b>c)
    max=b;
 
  printf("Max: %d",max);
  return 0;
}