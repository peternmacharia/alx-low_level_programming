#include "main.h"

/**
 * print_times_table - Function that prints times table
	*
	*@n: this are integers
	*
 * Return: Times table
 */
void print_times_table(int n)
{
int i, j, mult;

if (n >= 0 && n <= 15)
{
	for (i = 0; i <= n; i++)
	{
		printf("0, ");
		for (j = 1; j <= n; j++)
		{
			mult = i * j;
			printf("%d, ", mult);
		}
	}
	printf("\n");
}
}
