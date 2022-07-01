#include <stdlib.h>
#include <stdio.h>

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
	if (alphabets[i] == "e" && alphabets[i] == "q")
	{
		putchar(alphabets[i] = "abcdfghijklmnoprstuvwxyz");
	}
}
putchar('\n');
return (0);
}
