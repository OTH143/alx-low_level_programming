#include <stdio.h>

/**
 * _putchar - prints a character to stdout
 * @c: Character to be printed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
