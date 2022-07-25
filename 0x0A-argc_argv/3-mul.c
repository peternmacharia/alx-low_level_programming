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
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
