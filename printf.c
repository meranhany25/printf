#include "main.h"
/**
 * _printf - printf format
 * @format: funcion pointer
 * Return: count
 */
int _printf(const char *format, ...)
{
	va_list args;

	int count = 0;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				count += print_char(args);
				break;
			case 's':
				count += print_string(args);
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			case 'd':
			case 'i':
				count += print_decimal(args);
				break;
			default:
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
