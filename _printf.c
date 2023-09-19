#include "main.h"
/**
 * _printf - printed formates for each type of specifier
 * @format: Format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;
	const char *pointer = format;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);
	while (*pointer != '\0')
	{
		if (*pointer == '%')
		{
			switch (*(++pointer))
			{
				case 'c':
					char_print(list, &count);
					break;
				case 's':
					string_print(list, &count);
					break;
				case '%':
					count = count + _putchar('%');
					break;
				case 'd':
				case 'i':
					integer_print(list, &count);
					break;
				default:
					count = count + _putchar('%');
					count = count + _putchar(*pointer);
					break;
			}
		}
		else
			count = count + _putchar(*pointer);
		pointer++;
	}
	va_end(list);
	return (count);
}
