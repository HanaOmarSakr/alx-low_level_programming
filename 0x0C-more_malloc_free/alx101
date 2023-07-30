#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "_putchar.c"

int _strlen(char *s);
char *rev_string(char *s);
char *mul_digit(char *num, char digit, int zeros);
char *add_strings(char *a, char *b);
void print_error(void);

int main(int argc, char **argv)
{
    char *num1, *num2, *result, *partial;
    int len1, len2, i, zeros;

    if (argc != 3)
        print_error();

    num1 = argv[1];
    num2 = argv[2];
    len1 = _strlen(num1);
    len2 = _strlen(num2);
    for (i = 0; i < len1; i++)
        if (num1[i] < '0' || num1[i] > '9')
            print_error();
    for (i = 0; i < len2; i++)
        if (num2[i] < '0' || num2[i] > '9')
            print_error();

    num1 = rev_string(num1);
    num2 = rev_string(num2);

    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!result)
        print_error();
    result[0] = '0';
    result[1] = '\0';
    partial = malloc(sizeof(char) * (len1 + len2 + 1));
    if (!partial)
        print_error();

    zeros = 0;
    for (i = 0; i < len2; i++)
    {
        partial = mul_digit(num1, num2[i], zeros);
        result = add_strings(result, partial);
        zeros++;
    }

    result = rev_string(result);
    printf("%s\n", result);

    free(result);
    free(partial);
    return (0);
}

int _strlen(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        ;
    return (i);
}

char *rev_string(char *s)
{
    int i, j;
    char temp;

    for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
    return (s);
}

char *mul_digit(char *num, char digit, int zeros)
{
    char *result;
    int len, i, j, mul, rem, quo;

    len = _strlen(num) + zeros + 1;
    result = malloc(sizeof(char) * len);
    if (!result)
        print_error();
    
     for (i = 0; i < zeros; i++)
         result[i] = '0';

     rem = 0;
     for (j = 0; j < _strlen(num); j++)
     {
         mul = (num[j] - '0') * (digit - '0') + rem;
         quo = mul / 10;
         rem = mul % 10;
         result[i + j] = rem + '0';
         rem = quo;
     }
     if (rem > 0)
         result[i + j] = rem + '0';
     else
         result[i + j] = '\0';
     return (result);
}

char *add_strings(char *a, char *b)
{
    char *result;
    int len_a, len_b, len_r, i, sum, rem, quo;

    len_a = _strlen(a);
    len_b = _strlen(b);
    len_r = (len_a > len_b ? len_a : len_b) + 1;
    result = malloc(sizeof(char) * len_r);
    if (!result)
        print_error();

    rem = 0;
    for (i = 0; i < len_r - 1; i++)
    {
        sum = rem;
        if (i < len_a)
            sum += a[i] - '0';
        if (i < len_b)
            sum += b[i] - '0';
        quo = sum / 10;
        rem = sum % 10;
        result[i] = rem + '0';
        rem = quo;
    }
    if (rem > 0)
        result[i] = rem + '0';
    else
        result[i] = '\0';
    
     return (result);
}

void print_error(void)
{
   int i;
   char *error;

   error= "Error";
   for(i=0; error[i]; i++)
       _putchar(error[i]);
   _putchar('\n');
   exit(98);
}

