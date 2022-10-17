#include <stdio.h>

/**
 * main - entry
 * Return:always 0
 */
int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)
	{
		if (ls != 'e' && ls != 'q')
			putchar(ls);
	}

	putchar('\n');

	return (0);
}
