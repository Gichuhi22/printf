#include"main.h"


int printf_schar(char *s)
{
	int i;
	if (s == NULL)
		return (-1);


	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar(92);
			_putchar(120);
			if (s[i] <= 16)
				_putchar ('0');
			i += printf_hexaupper(s[i]);
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (i);
}
