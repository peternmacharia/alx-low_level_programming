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
	char i = &*s;

	_putchar(i);
	_putchar('\n');
}
