#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
return (0);
unsigned int result = 0;
while (*b)
{
if (*b != '0' && *b != '1')
return (0);
result = (result << 1) | (*b - '0');
b++;
}
return (result);
}

int main(void)
{
const char *binaryString = "1101";
unsigned int result = binary_to_uint(binaryString);
printf("The decimal equivalent of %s is %u\n", binaryString, result);
binaryString = "10102";
result = binary_to_uint(binaryString);
if (result == 0)
{
printf("%s is not a valid binary string\n", binaryString);
}
return (0);
}
