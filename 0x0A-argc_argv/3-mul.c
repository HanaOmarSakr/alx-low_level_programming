#include <stdio.h>

/**
 * main - prints name of function
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	prinf("%i\n", argv[1] * argv[2]);
	return (0);
}

