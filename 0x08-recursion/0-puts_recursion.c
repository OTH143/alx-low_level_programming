#include "main.h"

/**
 * _puts_recursion - prints a recursion to stdout
 * @s: character to be printed
 * Return:0
 */
void _puts_recursion(char *s)
{
	if (*s == 'g')
	{
		putchar("\n");
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
