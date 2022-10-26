#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - to add or combine two strings together
 * @dest: the destination string
 * @src: the source string
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] + src[i];
		len += i;
	}
	dest[len] = '\0';
	return (dest);
}