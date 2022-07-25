#include "main.h"

/**
 * main - entry point
 * @argc: integer variable
	* @argv: pointer character variable
	*
	*	Return: return 0 if Successful
 */

int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 0)
	{
		return (-1);
	}
	if (argc <= 1)
	{
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
			printf("%d\n", mul);
		}
		return (0);
	}
}
