#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
	* @n: an interger pointer
	*
 * Return: nothing to return
 */

void reset_to_98(int *n)
{
	int *p;

	p = &*n;
	*p = 98;
}
