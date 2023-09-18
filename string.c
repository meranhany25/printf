#include "main.h"
/**
 * string_print - handel charchter (%s)
 * @list: arguments counter
 * @count: pointer counts
 * Return: count
 */
int string_print(va_list list, int *count)
{
	const char *str = va_arg(list, const char *);

	if (str == NULL)
		str = "(null)";
	while (*str != '\0')
	{
		*count += _putchar(*str++);
	}
	return (*count);
}
