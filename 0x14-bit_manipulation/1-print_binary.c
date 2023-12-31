#include "main.h"

/**
 * powerFunction - Calculates the result of raising a base to a power.
 * @base: The base of the exponent.
 * @power: The power of the exponent.
 *
 * Return: The result of (base raised to the power), or 0 if an error occurs.
 */
unsigned long int _pow(unsigned int base, unsigned int power);
{
unsigned long int num;
unsigned int a;

num = 1;
for (a = 1; a <= power; a++)
num *= base;
return (num);
}

/**
 * printBinaryNotation - Prints the binary representation of a given number.
 * @n: The number to be printed in binary notation.
 *
 * Return: void
 */
void print_binary(unsigned long int n);
{
unsigned long int divisor, check;
char flag;

flag = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
