#include "main.h"

/**
* print_numbers - prints the numbers from 0 to 9, followed by a new line
*/

void print_numbers(void)
{
	char numbers[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(numbers[i]);
	}
	_putchar('\n');
}

