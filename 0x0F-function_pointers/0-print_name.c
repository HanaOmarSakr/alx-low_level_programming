#include "function_pointers.h"

void print_uppercase(char *name)
{
    while (*name)
    {
        putchar(toupper(*name));
        name++;
    }
    putchar('\n');
}

void print_lowercase(char *name)
{
    while (*name)
    {
        putchar(tolower(*name));
        name++;
    }
    putchar('\n');
}

