#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - returns the correct function operation
 * @s: the character to select the function with
 *
 * Return: a function pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
			break;
		i++;
	}

	return (ops[i].f);
}
