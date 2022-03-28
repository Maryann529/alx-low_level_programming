#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: empty string
 * @b:  is the constant byte
 * @n: number of bytes to fill.
 *
 * Return: a pointer to memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
