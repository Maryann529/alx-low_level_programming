#include "main.h"

/**
 * string_toupper - turn every lowercase letter in a string to uppercase.
 * @str: the stinrg to make all upper
 *
 *  Return: the string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
