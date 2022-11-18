#include "function_pointers.h"
#include <stdio.h>

/**
 * _putchar - prints c to standard output
 * @c: param 1
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
