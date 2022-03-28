#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: string.
 * Return: an int that is number of bytes that are same.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cnt, not_equal;

	not_equal = cnt = 0;
	for (i = 0; s[i] != '\0' && not_equal == 0; ++i)
	{
		not_equal = 1;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				not_equal = 0;
				++cnt;
			}
		}
	}
	return (cnt);
}
