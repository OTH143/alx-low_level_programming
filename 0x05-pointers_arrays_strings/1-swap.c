#include "main"

/**
 * swap_int - a given two imtegers swap the values they are holding
 * @a:parameter 1
 * @b:parameter 2
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
