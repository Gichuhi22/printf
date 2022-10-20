#include"main.h"
/**
 * printf_int - handles formatting of integers
 * @x: passed integer argument
 *
 * Return: returns an int value length of the string
 */


int printf_int(int x)
{
	int i;
	char *s;
	char string[50];

	s = my_itoa(x, string, 10);
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (strlen(s));
}