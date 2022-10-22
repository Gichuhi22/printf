#include"main.h"
/**
 * printf_uint - handles printing uinsigned integers on stdout
 * @x: unsigned integer argument
 * Return: returns number of characters of the string
 */


int printf_uint(unsigned int x)
{
	int i = 0, j, k = 0;
	char *str;

	j = digits_count(x);
	/*printf("digits count= %d\n", j);*/
	str = malloc(sizeof(char) * j);
	if (str == NULL)
	{
		free(str);
		return (-1);
	}

	if (x)
	{
		while (x > 0)
		{
			i = x % 10;
			str[k] = i + '0';
			k++;
			/*_putchar(i + '0');*/
			x = x / 10;
		}
		str[k + 1] = '\0';
		reverse_string(str, strlen(str));

		for (k = 0; str[k] != '\0'; k++)
			_putchar(str[k]);
	}
	free(str);
	return (strlen(str));
}
