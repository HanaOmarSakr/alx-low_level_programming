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

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
