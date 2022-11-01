#include "main.h"
#include <string.h>

/**
 * _strstr - locates substrings
 * @haystack: string
 * @needle: substring
 * Return: 1 on success, else null
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
