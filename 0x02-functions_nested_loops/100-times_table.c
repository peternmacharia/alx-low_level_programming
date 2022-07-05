#include "main.h"

/**
 * times_table - Function that prints times table
	*
	*@n: this are integers
	*
 * Return: Times table
 */
void print_times_table(int n)
{
int i, j, mult;

if (n > 0 && n < 15)
{
	for (i = 1; i <= n; i++)
	{
		printf("0, ");
		for (j = 1; j <= n; j++)
		{
			mult = n * n;
			printf("%d, ", mult);
		}
	}
}
}
