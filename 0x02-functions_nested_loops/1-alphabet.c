#include <stdio.h>
void print_alphabet(void);

/**
 * main - Entry point prints alphabets
 *
	* Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int i;

for (i = 93; i < 123; i++)
{
	printf("%d", i);
}
}
