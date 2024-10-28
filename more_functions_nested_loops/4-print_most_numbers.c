#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - printf the number.
 * Return: 0
 */

void print_most_numbers(void)
{
	int b;

	for (b = '0'; b <= '9'; b++)
	{
		if (b == '2' || b == '4')
		{
			continue;
		}
		_putchar(b);
	}
	_putchar('\n');
}
