#include"main.h"
/**
 * printf_int - handles formatting of integers
 * @x: passed integer argument
 *
 * Return: returns an int value length of the string
 */

int printf_int(int x)
{
	int i, k = 0, length;
	char *str;
	bool isNegative = false;

	str = malloc(sizeof(char) * (digits_count(x) + 1));
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	if (x)
	{
		if (x < 0)
		{
			isNegative = true;
			x = -1 * x;
		}
		while (x > 0)
		{
			i = x % 10;
			str[k] = i + '0';
			k++;
			x = x / 10;
		}
		if (isNegative)
			str[k++] = '-';

		str[k + 1] = '\0';
		length = strlen(str);
		reverse_string(str, length);

		for (k = 0; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	free(str);
	return (length);
}
