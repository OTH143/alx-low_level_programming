#include "main.h"
#include <string.h>

/**
 * _puts2 - puts function of a character
 * @str: str parameter
 */
void _puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
