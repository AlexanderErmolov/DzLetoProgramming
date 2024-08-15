/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void)
{
    unsigned char data = 0b01101;
    unsigned char bit_1 = (data >> 1) & 1;
    unsigned char bit_2 = (data >> 2) & 1;
    unsigned char xor_of_bit = bit_1 ^ bit_2;
    unsigned char result = data ^ (xor_of_bit << 1 | xor_of_bit << 2);
    printf("Результат: %d", result);
    return 0;
}
