#include <stdio.h>

/**
 * main - Entry point
 *
	* Return: Always 0 (Success)
 */
int main(void)
{
	char mirror[26] = "zyxwvutsrqponmlkjihgfedcba";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(mirror[i]);
	}
	putchar('\n');
	return (0);
}
