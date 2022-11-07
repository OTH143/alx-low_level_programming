#include <stdio.h>
#include <stdlib.h>

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
