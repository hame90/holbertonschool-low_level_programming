#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times, followed by a new line
 */
void print_alphabet_x10(void)
{
char ch[] = "abcdefghijklmnopqrstuvwxyz";
int i, j;

for (j = 0; j < 10; j++)
{
for (i = 0; i < 26; i++)
{
_putchar(ch[i]);
}
_putchar('\n');
}
}