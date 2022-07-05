#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
	*
	*@i: is an integer
 *
	* Returns: Last digit of a number
 */
int print_last_digit(int i)
{
int n;

n = i % 10;
if (i < 0)
{
	_putchar(-1 + 48);
	return (-1);
}
else
{
	_putchar(1 + 48);
	return (1);
}
_putchar('\n');
}
