#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - adds positive numbers.
 * @argc: is number of args.
 * @argv: array of args.
 * Return: 1 if not number char otherwise 0.
 */
int main(int argc, char *argv[])
{
    int i, j, sum;

    sum = 0;
    if (argc < 2)
    {
        printf("0\n");
        return (0);
    }

    for (i = 1; i < argc; ++i)
    {
        for (j = 0; argv[i][j] != '\0'; ++j)
        {
            if (argv[i][j] > '9' || argv[i][j] < '0')
            {
                printf("Error\n");
                return (1);
            }
        }
    }

    for (i = 1; i < argc; ++i)
        sum += atoi(argv[i]);
    printf("%d\n", sum);
    return (0);
}