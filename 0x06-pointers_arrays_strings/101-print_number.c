#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int i;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	for (i = divisor; i > 0; i /= 10)
	{
		_putchar((n / i) % 10 + '0');
	}
}
