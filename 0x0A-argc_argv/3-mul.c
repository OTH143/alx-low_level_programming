#include <stdio.h>

int main(int argc, char *argv[])
{
	int v;
	int y;
	int i;

	if (argc != 1)
	{
		printf("Error\n");
			return (1);
	}
	printf("input two numbers here:\n");
	scanf("%d %d", &v, &y);
	i = (v * y);
	printf("The multiplication of %d and %d is %d\n", v, y, i);
	return (0);
}
