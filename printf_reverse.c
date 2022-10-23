#include"main.h"
/**
 * printf_reverse - prints the recerse of a string
 * @s: string
 * Return: string length
 */

int printf_reverse(char *s)
{
	int i = 0, j;
	/*char temp;*/

	if (!s)
	{
		s = "(null)";
		return (-1);
	}

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}

	return (i);
}
