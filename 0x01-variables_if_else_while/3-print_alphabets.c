#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
	* Return: Always 0 (Success)
 */
int main(void)
{
char alphABET[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;

for (i = 0; i < 52; i++)
{
	putchar(alphABET[i]);
}
putchar('\n');
return (0);
}
