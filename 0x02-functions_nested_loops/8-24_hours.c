#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Jack Bauer
	*
 *Return: Returns every minute starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int i, j;
int m, n;

for (i = 0; i <= 2; i++)
{
	for (j = 0; j <= 3; j++)
	{
		_putchar(i);
		_putchar(j);
		_putchar(':');
		for (m = 0; m <= 5; m++)
		{
			for (n = 0; n <= 9; n++)
			{
				_putchar(m);
				_putchar(n);
			}
		}
	}
}
_putchar('\n');
}
