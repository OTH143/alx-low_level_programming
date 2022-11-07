#include <stdio.h>

/**
 * main - print input to output
 * @argc: number of command statements
 * @argv: name of command statements
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%d\n", i);
	}
	return (0);
}
