#include "main.h"

/**
 * print_chessboard - prints the chessboard..
 * @a: is the 2D array to print;
 * Return: nothing.
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j,

	    for (i = 0; i < 8; ++i)
	    {
		    for (j = 0; j < 8; ++j)
		    {
			    _putchar(a[i][j]);
		    }
		    _putchar('\n');
	    }
}

