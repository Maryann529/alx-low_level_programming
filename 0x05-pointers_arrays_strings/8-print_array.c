#include <stdio.h>
#include "main.h"

/**
 * print_array - print out array with commas.
 * @a: is the array of ints;
 * @n: is the number of elements in array.
 * Return:
 * void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
