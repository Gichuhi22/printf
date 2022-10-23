#include"main.h"
/**
 * printf_rot13 - encodes text rot13 format
 * @c: string pointer
 * 
 * Return: string length;
 */

int printf_rot13(char *s)
{
	int i, j;
	int count = 0;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz ";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";

	if (s)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; s1[j] != '\0'; j++)
			{
				if (s1[j] == s[i])
				{
				putchar(s2[j]);
				count++;
				break;
				}
			}
			if (!s1[j])
			{
				putchar(s[i]);
				count++;
			}
		}
	}
	else 
		return (-1);

	return (count);
}
