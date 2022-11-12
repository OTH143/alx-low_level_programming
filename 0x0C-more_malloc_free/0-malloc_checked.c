#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: integer
 * Return: A pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (0);
}
