#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints characters to stdout
 * @c: The character to be printed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
