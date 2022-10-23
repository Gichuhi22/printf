#include"main.h"
/**
 * printf_reverse - prints the recerse of a string
 * @s: string
 * Return: string length
 */

int printf_reverse(char *s)
{
	int length;

	length = strlen(s);
	reverse_string(s, length);

	return (length);
}
