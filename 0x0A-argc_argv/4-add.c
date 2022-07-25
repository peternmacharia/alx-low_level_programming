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
	int i, add;

	if (argc < 1)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 1)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
				printf("%d\n", add);
				return (0);
			}
		}
	}
}
