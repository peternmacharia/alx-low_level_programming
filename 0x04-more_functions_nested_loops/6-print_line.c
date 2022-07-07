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

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(95);
		}
	}
}
