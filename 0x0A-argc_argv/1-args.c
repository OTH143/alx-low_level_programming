#include <stdio.h>

/**
 * main - print input to output
 * @argc: number of command statements
 * @argv: name of command statements
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
