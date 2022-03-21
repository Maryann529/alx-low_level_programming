#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: is the pointer to an array of chars that will be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
	int i, len, temp;
	char ptr[1000];

	for (i = 0, len = 0; s[i] != '\0'; ++i, ++len)
		;

	for (i = 0; i < len; ++i)
	{
		ptr[i] = s[i];
	}

	temp = len - 1;
	for (i = 0; i < len; ++i, --temp)
	{
		s[i] = ptr[temp];
	}
}
