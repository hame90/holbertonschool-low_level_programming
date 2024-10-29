#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of tiles the character \ should be printed
 * return 0.
 */
void print_diagonal(int n)
{
	int i, j;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{

			for (j = 0; j < i; j++)
			{
				_putchar(' ');

			}
			_putchar('\\');
			_putchar('\\');

		}
	}
	else
	{
		_putchar('\n');
	}
}

