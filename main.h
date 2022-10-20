#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
/**
 * struct fmt - function to check for formats
 * @type: data type to print
 * @f: print function to use
 */
typedef struct fmt
{
	char *type;
	int (*f)();
}fmt_t;

int _putchar(char);
int ch(va_list);
int _printf(const char *format, ...);
int str(va_list);
int _int(va_list);
int print_op(const char *format, fmt_t *print_arr, va_list args);
char *my_itoa(int, char*, int);
int digits_count(int);
#endif /*main.h*/
