#include "main.h"
/**
 * print_alphabet - Prints alphabets in lowercase followed by new line
 *
	* Return: Always 0 (Success)
 */
void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
	putchar(i);
}
putchar('\n');
}
