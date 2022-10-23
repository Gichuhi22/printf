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
	int i, j = 0, flag = 0;

	if (format)
	{
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (!flag)
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
				case 'b':
					j += printf_bin(va_arg(args, unsigned int));
					break;
				case 'u':
					j += printf_uint(va_arg(args, unsigned int));
					break;
				case 'o':
					j += printf_octal(va_arg(args, unsigned int));
					break;
				case 'x':
					j += printf_hexalower(va_arg(args, unsigned int));
					break;
				case 'X':
					j += printf_hexaupper(va_arg(args, unsigned int));
					break;
				case 'S':
					j += printf_schar(va_arg(args, char*));
					break;
				case 'p':
					j += printf_p(va_arg(args, unsigned long int));
					break;
				case 'r':
					j += printf_reverse(va_arg(args, char*));
					break;
				case 'R':
					j += printf_rot13(va_arg(args, char*));
					break;
				case '\0':
					return (-1);
				default:
					j += _putchar('%');
					j += _putchar(format[i]);
			}
			flag = 0;
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
		else
			flag = 1;
	}
	va_end(args);
	}
	else
	{
		return (-1);
	}
	return (j);
}
