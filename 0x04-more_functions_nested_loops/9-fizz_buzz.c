#include "main.h"

/**
 * main - entry point
 *
	* Return: no return
 */

int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((j % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((j % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", j);
		}
	}
}
