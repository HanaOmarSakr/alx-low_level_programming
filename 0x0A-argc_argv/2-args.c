#include <stdio.h>

/**
 * main - prints name of function
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	for (int i = 0; i < argc ; i++);
	{
		printf("%d\n", argv[i]);
	}
	return (0);
}
