#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned integer.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: The unsigned integer representation of the binary number,
 *         or 0 if there is an error (invalid input).
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int num;

num = 0;
if (!b)
return (0);
for (a = 0; b[a] != '\0'; a++)
{
if (b[a] != '0' && b[a] != '1')
return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
num <<= 1;
if (b[a] == '1')
num += 1;
}
return (num);
}
