#include "main.h"
#include <string.h>

/**
 * _strspn - finds length of a prefix substring
 * @s: string
 * @accept: substring
 * Return:0
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
