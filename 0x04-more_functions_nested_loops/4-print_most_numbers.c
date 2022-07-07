#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9
	*
 * Return: The numbers without printing 2 and 4
 */
void print_most_numbers(void)
{
int i;

for (i = 48; i <= 57; i++)
{
	if (i != 2 && i != 4)
	{
		_putchar(i);
	}
	_putchar('\n');
}
}