#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination where memory is copied to.
 * @src: is the memory to be copied.
 * @n: number of bytes from memory area src to be copied.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
