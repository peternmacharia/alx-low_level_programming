#include "main.h"

/**
 * fizz_buzz - prints the fizz buzz test
 *
	* Return: no return
 */

int fizz_buzz(void)
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
