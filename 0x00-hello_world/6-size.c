#include <stdio.h>
/**
 * main - Ent
 * Return: always 0
 */
int main(void)
{
	printf("size of char: %li byte(s)\n", sizeof(char));
	printf("size of float: %li byte(s)\n", sizeof(float));
	printf("size of int: %li byte(s)\n", sizeof(int));
	printf("size of long int: %li byte(s)\n", sizeof(long int));
	printf("size of double: %li byte(s)\n", sizeof(double));
	printf("\"size of long long int: %li bytes)\n", sizeof(long long int));
	return (0);
}
