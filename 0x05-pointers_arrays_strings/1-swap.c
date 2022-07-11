#include "main.h"

/**
 * swap_int - a function that swaps the valuew of two integers
 * @a: first integer
	* @b: second integer
	*
	* Return: nothing to return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
