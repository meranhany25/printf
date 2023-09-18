#include "main.h"
/**
 * char_print - handel charchter (%c)
 * @list: arguments counter
 * @count: pointer counts
 * Return: count
 */
int char_print(va_list list, int *count)
{
	int ch = va_arg(list, int);

	*count += _putchar(ch);
	return (*count);
}
