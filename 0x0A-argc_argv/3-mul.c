#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int v, y, i;

	if (argc != 3)
	{
		printf("Error\n");
			return (1);
	}
	y = atoi(argv[1]);
	v = atoi(argv[2]);
	i = v * y;
	
	printf("The multiplication of %d and %d is %d\n", v, y, i);
	return (0);
}
