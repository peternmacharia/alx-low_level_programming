#include "main.h"

/**
 * _strcat - concatenates two strings
	* @dest: first character value
	* @src: second character value
	*
 * Return: returns a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	char *result;

	while (*(dest + i) != '\0')
	{
		if (i == '\0')
		{
			*dest += *src;
		}
		_putchar('\0');
		i++;
	}

	for (i = 0; i >= 0; i++)
	{
		result = dest[i];
	}
	return (result);
}
