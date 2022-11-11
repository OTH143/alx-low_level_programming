#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *y;
	unsigned int t;

	if (nmemb == 0 || (size == 0))
		return (NULL);

	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);

	for (t = 0; t < nmemb; t++)
		y[t] = 0;
	return (y);
}
