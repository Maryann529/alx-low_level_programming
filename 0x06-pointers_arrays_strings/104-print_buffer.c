#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printable - determines if a char should be printed
 * @ch: the char to determine if it should be printed.
 * Return: 0 to not print and 1 to print.
 */
int _printable(char ch)
{
	int i;
	
	char *arr = "\1\2\3\4\5\6\7\r\t\n\0";
	
	for (i = 0; i < 11; i++)
	{
		if (ch == arr[i])
			return (0);
	}
	return (1);
}
/**
 * print_bits - print out the hex of the chars.
 * @b: is the point ot the string.
 * @i: is where we are in the string.
 * @sz: size of the total string
 * Return: nothing.
 */
void print_bits(char *b, int i, int sz)
{
	int j, t, k, m, n;
	
	m = n = 0;
	t = i;
	for (k = 0; k < 5 && t < sz; ++k)
	{
		for (j = 0; j < 4 && t < sz; j += 2, m++, t++)
		{
			printf("%02x", b[i + m]);
			n += 2;
		}
		printf(" ");
		n++;
	}
	for ( ; n < 25; n++)
		printf(" ");
}
/**
 * print_buffer - print otu a buffer regarless of new lines or nulls
 * @b: the string to be printed
 * @size: size of the buffer.
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i, j;
	
	if (size == 0)
		printf("\n")
			
			for (i = 0; i < size; )
			{
				for (j = 0; j < 10 && i < size; ++j)
				{
					if (j == 0)
					{
						printf("%08x: ", i);
						print_bits(b, i, size);
					}
					if (_printable(b[i]))
						putchar(b[i]);
					else
						putchar('.');
					++i;
				}
				printf("\n");
			}
}
