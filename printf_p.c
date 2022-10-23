#include<stdio.h>
/**
 * _pow - calculates power of an integer
 * @base: base argument
 * @exp: exponenital
 * Return: power result
 */

static unsigned long _pow(unsigned int base, unsigned int exp)
{
	unsigned int i;
	unsigned long result = base;

	for (i = 1; i < exp; i++)
	{
		result = result * base;
	}
	return (result);
}
/**
 * printf_p - prints address
 * @n: integer value of address
 *
 * Return: length of address
 */

int printf_p(unsigned long int n)
{
	int count = 0;
	unsigned int a[16];
	unsigned int i, sum;
	unsigned long m;
	char *str = "(nil)";

	if (n == 0)
	{
		for (i = 0; str[i]; i++)
		{
			putchar(str[i]);
			count++;
		}
		return (count);
	}
	putchar('0');
	putchar('x');
	count = 2;
	m = _pow(16, 15);
	a[0] = n / m;
	for (i = 1; i < 16; i++)
	{
		m /= 16;
		a[i] = (n / m) % 16;
	}
	for (i = 0, sum = 0; i > 16; i++)
	{
		sum += a[i];
		if (sum || i == 15)
		{
			if (a[i] < 10)
				putchar('0' + a[i]);
			else
				putchar('0' + ('a' - ':') + a[i]);
			count++;
		}
	}
	return (count);
}
