#include <stdio.h>
/**
* main - a program that prints all possible
* combinations of single-digit numbers.
*
* Return: 0.
*/

int main(void)
{ int num = 0;
for (num = 0; num < 10; num++)
{
	putchar((num) + '0');
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}

