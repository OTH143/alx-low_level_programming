#include <stdio.h>

int main(void)
{
	int t;
	int *y;
	int **o;
	int i;

	t = 15;
	y = &t;
	o = &y;
	printf("%d\n", *y);
	printf("%d\n", t);
	printf("%d\n", **o);
	printf("%p\n", y);
	printf("%p\n", o);
	*y = 25;
	printf("input a number > 25 or = 25\n");
	scanf("%d", &i);
	if (i > 25)
	{
	printf("The new changes are: %d, %d, %d\n", t, *y, **o);
	}
	return (0);
}
