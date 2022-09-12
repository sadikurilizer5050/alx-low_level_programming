#include <stdio.h>
/**
* main - a program that prints all the numbers of base
* 16 in lowercase, followed by a new line.
*
* Return: 0.
*/

int main(void)
{ int hex = '0';
for (hex = '0'; hex <= 15; hex++)
	putchar((hex) + '0x');
putchar('\n');
return (0);
}
