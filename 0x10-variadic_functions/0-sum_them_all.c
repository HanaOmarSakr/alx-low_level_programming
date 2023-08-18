#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.io>

/**
 * sum_them_all - ..
 * @n: ...
 * Return: ..
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	int sum;

	if (n == 0)
		return (0);

	va_start(args, count);

	for (i = 0; i < count; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
