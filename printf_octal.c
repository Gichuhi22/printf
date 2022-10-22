#include"main.h"
/**
 * printf_octal - handles printing of octaldecimals
 * @x: unsigned integer argument
 * Return: number of character on the octaldecimal number
 */


int printf_octal(unsigned int x)
{
	int i, j, k = 0, length;
	char *str;

	j = digits_count(x);
	str = malloc(sizeof(char) * (j + 1));
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	if (x)
	{
		while (x > 0)
		{
			i = x % 8;
			str[k] = (i + '0');
			k++;
			x = x / 8;
		}
		str[k + 1] = '\0';
		length = strlen(str);
		reverse_string(str, length);

		for (k = 0; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	else
	{
		return (-1);
	}
	free(str);
	return (length);
}
