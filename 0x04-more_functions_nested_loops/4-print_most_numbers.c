#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0 to 9
 *
	* Return: no return
 */

void print_most_numbers(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		if (j != 2 && j != 4)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
