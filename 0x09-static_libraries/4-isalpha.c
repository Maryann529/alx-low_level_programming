#include "main.h"

/**
 * _isalpha - checks if a character is a letter
 * @c: the character to test
 *
 * Return: integer 1 if value is lower and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 95 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
