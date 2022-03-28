#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be searched.
 * @needle: the string to search for.
 * Return: pointer to the locate substring or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, not_equal;
	char *ptr;

	ptr = haystack;
	not_equal = 0
		for (i = 0; *ptr != '\0'; ++i, ++ptr)
		{
			not_equal = 0;
			for (j = 0; needle[j] != '\0'; ++j)
			{
				if (haystack[i + j] != needle[j])
					not_equal = 1;
			}
			if (not_equal == 0)
				return (ptr);
		}
	return (0);
}
