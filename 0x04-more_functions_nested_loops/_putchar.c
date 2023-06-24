#include <unistd.h>
#include "main.h"

/**
 * _putchar writes characters
 * @c : the char to be printed
 * Return: on success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
