#include "main.h"
/**
 * print_char - print all charachters
 * @args: list of arguments
 * Return: 1
 */
int print_char(va_list args)
{
	int c = va_arg(args, int);

	putchar(c);
	return (1);
}
/**
 * print_string - print all strings
 * @args: list of arguments
 * Return: count
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		count++;
	}
	return (count);
}
/**
 * print_decimal - print all inetegers
 * @args: list of arguments
 * Return: 1
 */
int print_decimal(va_list args)
{
	int num = va_arg(args, int);

	printf("%d", num);
	return (1);
}

