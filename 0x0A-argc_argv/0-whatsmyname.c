#include <stdio.h>

/**
 * main - prints out standard input to standard output
 * @argc: prints out the number of commands
 * @argv: prints out what is in argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);`:wq

	}
	return (0);
}
