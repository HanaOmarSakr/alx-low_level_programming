#include "main.h"

/**
 * print_array - prints the elements of the array
 * @n: input
 * @a: input
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(",");
	}
}
