#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - malloc new str and copy *str into it
 * @str: The string we are to copy
 * Return: pointer to a new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	int count = 0;
	char *dest;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	count += 1;
	dest = malloc(count * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = str[i];
	return (dest);
}