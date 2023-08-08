#include <stdio.h>
#include <stdlib.h>
/**
 * main - ..
 * @argc: ...
 * @argv: ..
 * Return: ..
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
