#include <stdio.h>
/**
* main - a program that prints all the numbers of base
* 16 in lowercase, followed by a new line.
*
* Return: 0.
*/

int main(void)
{ int hex = 0;
int hexout = 0;
for (hex = 0; hex <= 15; hex++)
hexout = hex / 16;
	if (hexout < 10)
		hexout = hexout + 48;
	else
		hexout = hexout + 55;
	putchar(hexout);
putchar('\n');
return (0);
}
