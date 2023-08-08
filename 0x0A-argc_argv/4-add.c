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
	int sum = 0;
	int temp;
	char *endptr;

	if (argc == 1)
	{
		printf("0\n");
		return (2);
	}

	for (i = 1; i < argc; i++)
	{
		temp = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + temp;
	}
	printf("%d\n", sum);
	return (0);
}
