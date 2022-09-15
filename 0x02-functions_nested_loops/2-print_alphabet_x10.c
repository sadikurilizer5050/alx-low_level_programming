#include "main.h"
/**
* print_alphabet_x10 - a function that prints 10
* times the alphabet, in lowercase, followed
* by a new line.
*
* Return: x10 a-z
*/
int print_alphabet_x10(void)
{
char alpha;
char co = 0;
while (co < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar (alpha);
}
co++;
_putchar('n');
}
}
