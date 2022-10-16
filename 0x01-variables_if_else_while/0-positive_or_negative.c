#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - if practical
 * return: always 0
 */
void main(void)
{
	int n;

	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}

