#include "main.h"
/**
 * reverse_string - reverses a string
 * @s: passed string argument
 * @length: length of the string
 */

void reverse_string(char *s, int length)
{
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

