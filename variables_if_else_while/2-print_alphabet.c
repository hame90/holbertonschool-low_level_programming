#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always success
 */

int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
