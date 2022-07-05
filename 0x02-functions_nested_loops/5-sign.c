#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
	* Return: 1 (prints +), 0 (prints 0) and -1 (prints -)
 */
int print_sign(int n)
{
if (n < 0)
{
	_putchar('-');
	return (-1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else if (n > 0)
{
	_putchar('+');
	return (1);
}
_putchar(',');
_putchar(' ');
}
