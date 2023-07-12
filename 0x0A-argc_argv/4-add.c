#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints name of function
 * @argc: input
 * @argv: input
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int temp;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		temp = atoi(argv[i]);
		if (temp == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + temp;
	}
	printf("%d\n", sum);
	return (0);

}
