#include <stdio.h>
#include "main.h"

int main(void)
{
char c = 'a';
if (_islower(c))
printf("%c is lowercase\n", c);
else
printf("%c is not lowercase\n", c);

c = 'A';
if (_islower(c))
printf("%c is lowercase\n", c);
else
printf("%c is not lowercase\n", c);

return (0);
}
