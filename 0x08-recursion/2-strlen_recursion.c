#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
	* @s: character variable
 *
	* Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;
		_putchar(i);
	}
}
