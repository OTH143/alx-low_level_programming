#include <stdio.h>
#include <stdlib.h>

/**
 * main - sends input to standard output
 * @argc: parameter 1
 * @argv: parameter 2
 * Return: 0 unless the amount of numbers inputed are below two
 */
int main(int argc, char *argv[])
{
	int i = 0, v, y;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	y = atoi(argv[1]);
	v = atoi(argv[2]);
	i = v * y;

	printf("%d\n", i);
	return (0);
}
