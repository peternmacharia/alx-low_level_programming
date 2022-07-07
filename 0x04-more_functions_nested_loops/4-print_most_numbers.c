#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9
*
* Return: no return
*/

void print_most_numbers(void)
{
	int m;

for (m = 48; m <= 57; m++)
	{
		if (m != 50 && m != 52)
		{
			_putchar(m);
		}
	}
}
