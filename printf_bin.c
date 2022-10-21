#include"main.h"
/**
 *printf_bin - handles binary output
 *@a: unsigned integer argument
 *Return: character count
 */
int printf_bin(unsigned int a)
{
	int i, count = 0;
	char s[33];
	unsigned int t = a;

	while (t / 2 != 0)
	{
		t = t / 2;
		count++;
	}
	count++;

	for (i = 0; a > 0; i++)
	{
		s[i] = a % 2;
		a = a / 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i] + '0');
	}

	return (count);

}
