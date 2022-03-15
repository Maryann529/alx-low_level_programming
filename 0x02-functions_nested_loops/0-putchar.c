#include "main.h"

/**
 * main - print _putchar
 *
 * Description: print _putchar
 *
 * Return: 0 on (Success)
 */
int main(void)
{
	char text[9] = "_putchar";

		int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
