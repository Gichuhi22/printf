#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
int _putchar(char );
int _printf(const char *format, ...);
int printf_string(char *);
int printf_int(int);
char *my_itoa(int, char*, int);
int digits_count(int);
int printf_bin(unsigned int);
int printf_uint(unsigned int);
void reverse_string(char *, int);
int printf_octal(unsigned int);
int printf_hexalower(unsigned int);
int printf_hexaupper(unsigned int);
#endif /*main.h*/
