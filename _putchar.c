#include "main.h"
/**
 * _putchar - writes the character
 * @ch: char
 * Return: On success 1 | On failed -1
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
