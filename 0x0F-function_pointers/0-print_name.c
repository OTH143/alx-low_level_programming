#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print a name
 * @f: pointer of the printing function
 * @name: name to print
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
