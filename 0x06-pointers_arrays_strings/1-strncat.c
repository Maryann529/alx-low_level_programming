#include "main.h"

/**
 * _strncat - concats two strings given bit count of string to add..
 * @dest: string to add to and return.
 * @src: string to concat onto dest.
 * @n: length of string to be added.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
