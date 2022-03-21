#include "main.h"

/**
 * _puts - Prints a string
 * @str: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
