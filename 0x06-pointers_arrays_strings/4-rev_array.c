#include "main.h"

/**
 * reverse_array - reversing an array of integers
 * @a: array
 * @n: number of element of an array
 * Return: rev
 */
void reverse_ array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
