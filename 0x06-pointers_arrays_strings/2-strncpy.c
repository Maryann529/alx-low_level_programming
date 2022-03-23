#include "main.h"

/**
 * _strncpy - copy src into dest and go to n bits.
 * @dest: where to copy the string and what is returned.
 * @src: the string to be copied.
 * @n: the number of places to copy.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	for ( ; i < n; ++i)
		dest[i] = '\0';
	return (dest);
}
