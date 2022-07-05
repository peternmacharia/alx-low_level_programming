#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 *
	* @n: Integer number
	* Return: Returns natural number upto 98
 */
void print_to_98(int n)
{
for (n = 0; n <= 98; n++)
{
	if (n >= 0)
	{
	_putchar(n);
	_putchar(44);
	_putchar(32);
	}
}
}
