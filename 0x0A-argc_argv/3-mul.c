#include <stdio.h>
#include "main.h"
/**
 * main - ..
 * @argc: ...
 * @argv: ..
 * Return: ..
 */

int main(int argc __attribute__((unused)), char *argv[])
{
        (void)argv;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d", argv[1] * argv[2]);
	return (0);
}
