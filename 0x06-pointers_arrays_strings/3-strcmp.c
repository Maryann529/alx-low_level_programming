#include "main.h"

/**
 * _strcmp - compares 2 strings and returns 0
 * if the two strings are the same.
 * if not the same it will retun the difference between
 * the first two chars that  are not the same so *s1 - *s2,
 * this will be a  positive or negative number.
 * @s1: a string to be compared.
 * @s2: a string to be compared.
 *
 * Return: 0 if equal or positive/negative number otherwise.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; ++i)
		;
	return (s1[i] - s2[i]);
}
