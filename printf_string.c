#include"main.h"
/**
 *printf_string - handles strings output on standard output
 *@s: a pointer to passed string argument
 *Return: length of the string
 */
int printf_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (strlen(s));
}


