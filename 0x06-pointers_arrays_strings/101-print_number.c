#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int digit;
	int neg = 0;
	int divisor = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		neg = 1;
	}
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n -= digit * divisor;
		divisor /= 10;
	}
	if (neg)
	{
		_putchar('-');
	}
}
