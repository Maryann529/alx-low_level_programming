#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @nmae: name to print
 * @f: pointer to the printing function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
