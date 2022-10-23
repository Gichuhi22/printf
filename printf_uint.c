#include"main.h"
/**
 * printf_uint - handles printing unsigned integers on stdout
 * @x: unsigned integer argument
 * Return: returns number of characters of the string
 */


int printf_uint(unsigned int x)
{
	unsigned int a[10];
	unsigned int i, m, sum;
	int count;

	m = 1000000000; /* (10 ^ 9) */
	a[0] = x / m;
	for (i = 1; i < 10; i++)
	{
		m /= 10;
		a[i] = (x / m) % 10;
	}
	for (i = 0, sum = 0, count = 0; i < 10; i++)
	{
		sum += a[i];
		if (sum || i == 9)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
