#include"main.h"


/**
 * printf_p - prints address
 * @n: integer value of address
 *
 * Return: length of address
 */

int printf_p(unsigned long int n)
{
	int i;
	char s[100];

	register int count = 0;

	if (!n)
		return (-1);
	my_itoa(n, s, 16);
	putchar('0');
	putchar('x');
	for (i = 0; s[i] != '\0'; i++)
		count += putchar(s[i]);
	return (count);
}
