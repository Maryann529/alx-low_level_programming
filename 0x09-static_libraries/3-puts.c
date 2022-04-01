#include "main.h"

/**
 * _puts - prints the given string to stdout
 * @str: the required string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
