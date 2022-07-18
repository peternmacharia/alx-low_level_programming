#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
	* @s: character variable
	* @b: character variable
	* @n: an unsigned integer variable
 *
	* Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}

	return (s);
}
