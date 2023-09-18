#include "main.h"
/**
 * unsigned_print - print unsigned integer.
 * @numbers: unsigned integer
 * @base: base numbers
 * @digits: charchater of digits
 * Return: counts
 */
int unsigned_print(unsigned int numbers, int base, const char *digits)
{
	char buffer[32];
	int counts = 0;
	int index = sizeof(buffer) - 1;
	int i;

	if (numbers == 0)
	{
		buffer[index--] = '0';
		counts++;
	}
	while (numbers > 0)
	{
		buffer[index--] = digits[numbers % base];
		numbers /= base;
		counts++;
	}
	for (i = index + 1; i < (int)sizeof(buffer); i++)
	{
		_putchar(buffer[i]);
	}

	return (counts);
}

