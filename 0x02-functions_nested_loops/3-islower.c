#include <stdio.h>
int _islower(int c);

/**
 * main - Entry point Checks the lowercase character
 *
	* Return: return 1 (if lowercase) return 0 (otherwise)
 */
int main(void)
{
int i, ltr;

ltr = _islower(i);
printf("%d", ltr);
return (0);
}

int _islower(int c)
{
int result;

if (c == 'c')
{
	return (1);
}
else
{
	return (0);
}
}
