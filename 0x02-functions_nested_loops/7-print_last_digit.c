#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
	*
	*@i: is an integer
 *
	* Returns: Last digit of a number
 */
int print_last_digit(int m)
{
int l;

l = m % 10;
if (l < 0)
{
	_putchar(-l + 48);
	return (-1);
}
else
{
	_putchar(l + 48);
	return (1);
}
}
