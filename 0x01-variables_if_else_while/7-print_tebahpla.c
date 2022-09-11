#include <stdio.h>
/**
* main - a program that prints the lowercase alphabet in
* reverse, followed by a new line.
*
* Return: 0.
*/

int main(void)
{
char ch = 'z';
for (ch = 'z'; ch < 'z'; ch--)
	putchar(ch);
putchar('\n');
return (0);
}
