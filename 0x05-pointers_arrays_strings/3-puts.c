#include "main.h"

/**
 * _puts - Prints a string
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _put(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
