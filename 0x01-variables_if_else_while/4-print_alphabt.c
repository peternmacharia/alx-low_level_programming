#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
	* Return: Always 0 (Success)
 */
int main(void)
{
char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
	if (i == 4 && i == 16)
	{
		putchar(alphabets[i] = "abcdfghijklmnoprstuvwxyz");
	}
}
putchar('\n');
return (0);
}
