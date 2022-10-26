#include "main.h"
#include <string.h>

/**
 * _strncmp - for comparing purpose
 * @s1: param1
 * @s2: param2
 * Return: the difference in s1 and s2
 */
char *_strcmp(char *s1, char *s2);
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[1] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (0);
}
