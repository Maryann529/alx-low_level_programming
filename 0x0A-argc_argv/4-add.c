<<<<<<< HEAD
#include <stdlib.h>
=======
>>>>>>> 55253bcd8581b592402fa4f369172142c62a8808
#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
 * main - adds positive numbers.
 * @argc: is number of args.
 * @argv: array of args.
 * Return: 1 if not number char otherwise 0
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
=======
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
    int i, d, n, len, f, digit;

    i = 0;
    d = 0;
    n = 0;
    len = 0;
    f = 0;
    digit = 0;

    while (s[len] != '\0')
        len++;

    while (i < len && f == 0)
    {
        if (s[i] == '-')
            ++d;

        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';
            if (d % 2)
                digit = -digit;
            n = n * 10 + digit;
            f = 1;
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
            f = 0;
        }
        i++;
    }

    if (f == 0)
        return (0);

    return (n);
}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
    int sum, num, i, j, k;

    sum = 0;

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] > '9' || argv[i][j] < '0')
            {
                puts("Error");
                return (1);
            }
        }
    }

    for (k = 1; k < argc; k++)
    {
        num = _atoi(argv[k]);
        if (num >= 0)
        {
            sum += num;
        }
    }

    printf("%d\n", sum);
    return (0);
}
>>>>>>> 55253bcd8581b592402fa4f369172142c62a8808
