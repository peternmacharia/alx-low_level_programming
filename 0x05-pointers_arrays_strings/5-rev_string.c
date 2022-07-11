/**
 * rev_string - prints a reverse string
	* @s: a string character
 *
	* Return: returns nothing
 */

void rev_string(char *s)
{
	int i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
