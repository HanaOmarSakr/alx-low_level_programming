#include <stdio.h>

/**
 * print_before_main - ...
 */

#include <stdio.h>

/* Define a function with the constructor attribute */
void __attribute__((constructor)) print_before_main()
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}

int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return 0;
}

