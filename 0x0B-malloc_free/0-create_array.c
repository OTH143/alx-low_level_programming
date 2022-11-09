#include "main.h"
#include <stdlib.h>

/**
 * *create_array - array for printing a string
 * @size: parameter 1
 * @c: parameter 2
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int tn;

	buffer = malloc(sizeof(char) * size);
	if (size == 0 || buffer == NULL)
		return (NULL);

	for (tn = 0; tn < size; tn++)
	{
		buffer[tn] = c;
	}
		return (buffer);
}
