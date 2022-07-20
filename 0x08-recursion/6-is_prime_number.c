#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input is a prime number
	* otherwise return 0
	* @n: integer variable
	*
 * Return: returns 1 or 0
 */

int is_prime_number(int n)
{
	if ((n / n) == 1 || (n / 1) == n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
