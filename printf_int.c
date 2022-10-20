#include"main.h"
/**
 * _int - handles formatting of integers
 * @intgr: list printed
 *
 * Return: returns an int value length of the string
 */

int _int(va_list intgr)
{
	int i, expo = 1, length = 0;
	unsigned int n;

	i = va_arg(intgr, int);

	if (i < 0)
	{
		length += _putchar('-');
		n = i * -1;
	}
	else
		n = i;
	while (n / expo > 9)
		expo *= 10;

	while (expo != 0)
	{
		length += _putchar(n / expo + '0');
		n = n % expo;
		expo = expo / 10;
	}
	return (length);
}
