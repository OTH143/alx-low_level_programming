#include <stdio.h>

/**
 * main - prints input to standard output
 * @argc: number of commandline
 * @argv: input of commandline
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ii;

	for (ii = 0; ii < argc; ii++)
	{
	printf("%s\n", argv[ii]);
	}
	return (0);
}
