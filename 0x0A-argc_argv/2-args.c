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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
