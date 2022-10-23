#include"main.h"
/**
 * printf_reverse - prints the recerse of a string
 * @s: string
 * Return: string length
 */

int printf_reverse(char *s)
{
	int length, i, j;
	char temp;

	if (!s)
		return (-1);

	length = strlen(s);
	for (i = 0, j = length; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		putchar(s[i]);
	}

	return (length);
}
