#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - ..
 * @argc: ...
 * @argv: ..
 * Return: ..
 */

int main(int argc, char *argv[])
{
    int sum = 0; // initialize the sum to zero
    for (int i = 1; i < argc; i++) // loop through the command-line arguments
    {
        char *arg = argv[i]; // get the current argument
        for (int j = 0; arg[j] != '\0'; j++) // loop through the characters of the argument
        {
            if (!isdigit(arg[j])) // if the character is not a digit
            {
                printf("Error\n"); // print error message
                return 1; // exit with status code 1
            }
        }
        int num = atoi(arg); // convert the argument to an integer
        if (num > 0) // if the number is positive
        {
            sum += num; // add it to the sum
        }
    }
    printf("%d\n", sum); // print the sum, followed by a new line
    return 0; // exit with status code 0
}

