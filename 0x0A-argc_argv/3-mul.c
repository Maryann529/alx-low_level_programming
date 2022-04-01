#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers.
 * @argc: is number of args.
 * @argv: array of args.
 * Return: 1 if wrong number of args is passed in otherwise 0.
 */
int main(int argc, char *argv[])
{
    int num;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }
    num = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", num);
    return (0);
}