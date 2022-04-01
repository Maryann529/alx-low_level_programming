#include "main.h"

/**
 * _islower - checks if a character is a lowercase letter
 * @c: the character to test
 *
 * Return: integer 1 if value is lower and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 95 && c <= 122)
		return (1);
	return (0);
}
