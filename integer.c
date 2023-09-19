#include "main.h"
/**
 * integer_print - handel charchter (%i)(%d)
 * @list: arguments counter
 * @count: pointer counts
 * Return: count
 */
int integer_print(va_list list, int *count)
{
	int numbers = va_arg(list, int);

	if (numbers < 0)
	{
		*count += _putchar('-');
		numbers = -numbers;
	}
	*count += unsigned_print(numbers, 10, "0123456789");

	return (*count);
}
