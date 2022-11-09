#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - array for prints a string
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	int *buffer;
	unsigned int tn;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *)malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		tn = 0;
		while (tn < size)
		{
			*(buffer + tn) = c;
			tn++;
		}
		return (buffer);
	}
}
