#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Jack Bauer
	*
 *Return: Returns every minute starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int i, j, m, n;

for (i = 48; i <= 50; i++)
{
	for (j = 48; j <= 57; j++)
	{
		for (m = 48; m <= 53; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				_putchar(i);
				_putchar(j);
				_putchar(':');
				_putchar(m);
				_putchar(n);
				_putchar('\n');
			}
		}
	}
}
}
