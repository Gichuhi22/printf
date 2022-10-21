#include"main.h"
/**
 *reverse_string - reverses a string
 *@s: passed string
 *@length: length of the string
 */

void reverse_string(char *s, int length)
{
	int start, end;
	char temp;

	for (start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}

}


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
