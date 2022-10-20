#include"main.h"
/**
 * digits_count - counts the number of digits in an integer
 * @a: integer value argument
 * Return: integer count value
 */

int digits_count(int a)
{
	int count = 0;

	if (a < 0)
	{
		a = -1 * a;
		count += 1;
	}
	while (a > 0)
	{
		a = a / 10;
		count++;
	}
	return (count);
}
/**
 * my_itoa - converts integers to strings
 * @a: integer value to convert
 * @str: pointer to converted string array
 * @base: base of the passe value
 *
 * Return: pointer to string array
 */

char *my_itoa(int a, char *str, int base)
{
	int b = 0;

	if (a == 0)
	{
		str[b] = '0';
		str[b + 1] = '\0';
		return (str);
	}

	if (a < 0)
	{
		a = -1 * a;
		b++;
	}
	b = digits_count(a) + b;
	str[b] = '\0';

	while (a > 0)
	{
		str[b - 1] = a % base + '0';
		a = a / base;
		b--;
	}
	if (b == 1)
	{
		str[0] = '-';
	}

	return (str);
}
