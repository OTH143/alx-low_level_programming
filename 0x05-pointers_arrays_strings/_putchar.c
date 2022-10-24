#include <unistd.h>

/**
 * _putchar - prints characters to stdout
 * @c: character to be printed
 * Return:Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
