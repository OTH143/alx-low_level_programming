#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - print character to stdout
 * @c:Character to be printed
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
