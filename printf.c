#include"main.h"
void switch_case(char *);
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
	int i, j = 0;

	if (format)
	{
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{

		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar((char)(va_arg(args, int)));
					j++;
					break;
				case 's':
					j += printf_string(va_arg(args, char*));
					break;
				case '%':
					_putchar('%');
					j++;
					break;
				case 'd':
					j += printf_int(va_arg(args, int));
					break;
				case 'i':
					j += printf_int(va_arg(args, int));
					break;
				default:
					j += _putchar('%');
					j += _putchar(format[i]);
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(args);
	}
	else
	{
		return (-1);
	}
	return (j);
}
