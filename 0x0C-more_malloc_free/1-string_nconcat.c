#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - cencentrates two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: parameter 3
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
	{
		size2++;
	}
	if (n > size2)
		n = size2;
	p = malloc((size1 + n + 1) * sizeof(char));

	if (p == NULL)
		return (0);
	for (i = 0; i < size1; i++)
	{
		p[i] = s1[i];
	}
	for (; i < (size1 + n); i++)
	{
		p[i] = s2[i - size1];
	}
	p[i] = '\0';

	return (p);
}
