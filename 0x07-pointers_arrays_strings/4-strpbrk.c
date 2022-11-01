#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches for a specific byte in a string
 * @s: string
 * @accept: string
 * Return: on success 0, error 1
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
