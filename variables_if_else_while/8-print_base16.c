#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char ch;

for (n = 0; n < 10; n++)
putchar(n + '0');
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');

return (0);
}
