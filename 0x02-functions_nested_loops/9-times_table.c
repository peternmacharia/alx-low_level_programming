#include "main.h"

/**
 * times_table - Function that prints the 9 times table
	*
	*@i, @j: this are integers
	*
 * Return: The 9 times table
 */
void times_table(void)
{
int i, j;

for (i = 48; i <= 57; i++)
{
	for (j = 48; j <= 57; j++)
	{
		if (j >= 57)
		break;
		_putchar(i);
		_putchar(j);
		_putchar(44);
		_putchar(' ');
	}
}
}
