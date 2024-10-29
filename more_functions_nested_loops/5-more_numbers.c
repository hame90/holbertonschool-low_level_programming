#include <stdio.h>
#include "main.h"
/**
*the prints 10 times the numbers, from 0 to 14
*return 0;
*/

void print more_numbers(void)

{ 
	int a, b;
	char nums[] = "01234567891011121314";

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			_putchar (nums[b]);
		}
		_putchar('\n');
	}
		
}
