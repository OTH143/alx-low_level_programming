#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - if practical
 * return: always 0
 */
int main(void)
{
	int num;
	
	scanf("%d", &num);
	if (num > 0)
	{
		printf("%d is positive\n", num);
	}
	else if (num < 0)
	{
		printf("%d is negative\n", num);
	}
	else if (num == 0)
	{
		printf("%d is zero\n", num);
	}

	return (0);
}

