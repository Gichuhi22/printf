#include"main.h"
/**
 *print_op - checks the specifier to print
 *@format: passed format string
 *@print_arr: array of structures
 *@args: list of arguments to print
 *Return: int number of char to print
 */

int print_op(const char *format, fmt_t *print_arr, va_list args)
{
	char a;
	int i = 0, j = 0, k = 0;

	a = format[i];

	while (a != '\0')
	{
		if (a == '%')
		{
			k = 0;
			j++;
			a = format[j];

			while (print_arr[k].type != NULL && a != *(print_arr[k].type))
				k++;
			if (print_arr[k].type != NULL)
				i += print_arr[k].f(args);
			else
			{
				if (a == '\0')
					return (-1);
				if (a != '%')
					i += _putchar('%');
				i += _putchar(a);
			}
		}
		else
			i += _putchar(a);
		j++;
		a = format[j];
	}
	return (i);
}



/**
 *_printf - mimics the standard printf function
 *@format: format string pointer
 *
 *Return: returns an integer value of number of characters in the
 *format string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int j = 0;

	fmt_t specifier[] = {
		{"c", ch},
		{"s", str},
		{"d", _int},
		{"i", _int},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);

	va_start(args, format);
	j = print_op(format, specifier, args);
	va_end(args);
	return (j);
}

