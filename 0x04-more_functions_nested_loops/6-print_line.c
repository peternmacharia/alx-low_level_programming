#include "main.h"

/**
 * print_line - Draws a line in the terminal
	*
	* @n: Integer number
 *
	* Return: Line in the terminal
 */

void print_line(int n)
{
int i;

	if (n >= 1)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}
