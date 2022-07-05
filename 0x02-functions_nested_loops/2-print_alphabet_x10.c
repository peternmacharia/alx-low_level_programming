#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabets in lower case
 *
	* Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int j;

for (i = 0; i < 10; i++)
{
	for (j = 97; j <= 122; j++)
	{
		putchar(j);
	}
}
putchar('\n');
}
