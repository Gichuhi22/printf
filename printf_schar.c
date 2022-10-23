#include"main.h"

/**
 * printf_schar - print special characters
 * @s: format string
 * Return: length of string
 */

int printf_schar(char *s)
{
	int i;
	char *str;

	if (s == NULL)
		return (-1);
	
	str = malloc(sizeof(char) * (strlen(s) + 2));
	for (i = 0; s[i] != '\0'; i++)
		str[i] = s[i];

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar(92);
			_putchar(120);
			if (str[i] <= 16)
				_putchar ('0');
			i += printf_hexaupper(str[i]);
			_putchar(str[i]);
		}
		else
		{
			_putchar(str[i]);
		}
	}
	return (i);
}
