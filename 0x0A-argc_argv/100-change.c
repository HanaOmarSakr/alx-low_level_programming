#include <stdio.h>
#include <stdlib.h>

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ...
 */

int main(int argc, char *argv[])
{
	int coins;
	int value;
	int cents;
	int values[] = {25, 10, 5, 2, 1};
	int size;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coins = 0;
	size = sizeof(values) / sizeof(values[0]);

	for (i = 0; i < size; i++)
	{
		value = values[i];
		coins += cents / value;
		cents %= value;
		if (cents == 0)
		{
			break;
		}
	}
	printf("%d\n", coins);
	return (0);
}

