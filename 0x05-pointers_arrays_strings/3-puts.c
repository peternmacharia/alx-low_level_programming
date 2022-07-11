#include "main.h"

/**
 * _puts - function that prints a strings
 * @str: a string character
	*
	*	Return: nothing to return
 */

void _puts(char *str)
{
	char s = 0;

	while (s >= 0)
	{
		if (str[s] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[s]);
		s++;
	}
}
