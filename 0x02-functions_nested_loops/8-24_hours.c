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

for (i = 48; i <= 50; i++)
{
	for (j = 48; j <= 51; j++)
	{
		_putchar(i);
		_putchar(j);
	}
}
_putchar('\n');
}
