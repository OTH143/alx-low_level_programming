#include "main.h"

/**
 * factorial - prints the factorial of a given number
 * @n: the integer to be printed
 * Return: on success 0
 */
int factorial(int n)
{
	return (n * factorial(n -1));
}
