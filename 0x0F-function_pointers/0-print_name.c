
#include "function_pointers.h"
/**
 *  print_name - function
 *  @name: input
 *  @f: input
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
