#include"main.h"

/**
 * digits_count - counts the number of digits in an integer
 * @num: integer value
 * Return: count value
 */
int digits_count(int num)
{
	int count = 0;

	if (num < 0)
	{
		num *= -1;
		count += 1;
	}
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}
