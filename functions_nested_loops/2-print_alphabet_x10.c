#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 time in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
int y;

for (y = '0'; y <= '9'; y++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');

}

}
