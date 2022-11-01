#include "main.h"
#include <string.h>

/**
 *_memset - this memory set function
 *@s: string
 *@b: character
 *@n: integer
 *Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
