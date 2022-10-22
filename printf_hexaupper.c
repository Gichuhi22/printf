#include"main.h"
/**
 * printf_hexaupper - printf hexadecimals in lower case
 * @x: unsigned integer to convert
 * Return: length of the hexadecimal
 */

int printf_hexaupper(unsigned int x)
{
	int i, j, k = 0, length;
	char *str;

	j = digits_count(x);
	str = malloc(sizeof(char) * j);
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	if (x)
	{
		while (x != 0)
		{
			i = x % 16;
			if (i < 10)
			{
				str[k] = i + 48;
				k++;
			}
			else
			{
				str[k] = i + 55;
				k++;
			}
			x = x / 16;
		}
	str[k + 1] = '\0';
	length = strlen(str);
	reverse_string(str, length);
	}

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	free(str);
	return (length);
}
