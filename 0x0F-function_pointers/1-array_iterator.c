#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: parameter 1
 * @size: parameter 2
 * @action: parameter 3
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int e;

	if (!array || !action)
		return;
	for (e = 0; e < size; e++)
		action(array[e]);
}
