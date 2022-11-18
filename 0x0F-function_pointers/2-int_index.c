#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: Param 1
 * @size: Param 2
 * @cmp: param 3
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
