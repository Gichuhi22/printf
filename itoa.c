#include"main.h"

/**
 * my_itoa - converts integers to strings
 * @num: integer value to convert
 * @str: pointer to converted string array
 * @base: base of the passe value
 *
 * Return: pointer to string array
 */

char *my_itoa(int num, char *str, int base)
{
	int i = 0, rem;
	bool isNegative = false;

	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	/*Negative numbers are only handled for base 10*/
	if (num < 0 && base == 10)
	{
		isNegative = true;
		num *= -1;
	}
	while (num != 0)
	{
		rem = num % base;
		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num = num / base;
	}
	/* Append negative sign for negative numbers*/
	if (isNegative)
	{
		str[i++] = '-';
	}
	str[i] = '\0';

	reverse_string(str, i);

	return (str);
}
