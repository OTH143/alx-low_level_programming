#include "main.h"

/**
 * _strncat - function to append some charx
 * @dest: 1 param
 * @src: 2 pparam
 * @n: 3rd param
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
