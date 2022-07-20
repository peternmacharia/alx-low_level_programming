#include "main.h"

/**
 * _puts_recursion - function that prints a string
	* followed by a new line
	* @s: character variable
	*
 * Return: return the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
