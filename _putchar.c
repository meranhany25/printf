#include "main.h"
/**
 * _putchar - Writes a single character.
 * @ch: The character to write.
 * Return: On success, returns 1. On failure, returns -1.
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
