#include"main.h"
/**
 *str - handles strings output on standard output
 *@string: passed string list
 *Return: length of the string
 */
int str(va_list string)
{
	int length;
	char *s;

	s = va_arg(string, char *);

	if (s == NULL)
		s = "(nil)";

	for (length = 0; s[length] != '\0'; length++)
	{
		_putchar(s[length]);
	}
	return (strlen(s));
}


