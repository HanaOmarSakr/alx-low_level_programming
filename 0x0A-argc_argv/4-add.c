#include <stdio.h>
#include <stdlib.h>
/**
 * main - ..
 * @argc: ...
 * @argv: ..
 * Return: ..
 */

int main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;

	int i;
	int sum;
	int temp;

	if (argc == 1)
	{
		printf("0\n");
		return (2);
	}

	for (i = 0; i < argc - 1; i++)
	{
		temp = atoi(argv[i]);
		if (temp == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + temp;
	}
}
