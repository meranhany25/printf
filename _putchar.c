#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @ch:The character to print
 * Return: On success 1 || -1 On failed
*/

int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
