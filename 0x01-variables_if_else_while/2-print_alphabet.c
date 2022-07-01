#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
	* Return: Always 0 (Success)
 */
int main(void)
{
char alphas[26] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 0; i < 26; i++)
{
	putchar(alphas[i]);
}
putchar('\n');
return (0);
}
