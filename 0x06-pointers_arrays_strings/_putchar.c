#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character to stdout
 * @c: the character to be printed
 * Return:on succession 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
