#include "main.h"
#include <string.h>

/**
 * strcat - to add or combine two strings together
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the destination strings
 */
char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
