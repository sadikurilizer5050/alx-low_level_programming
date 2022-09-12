#include <stdio.h>
/**
* main - a program that prints all possible
* different combinations of two digits.
*
* Return: 0.
*/

int main(void)
{ int num = 0;
	for (num = 0; num < 90; num++)
	{ putchar((num / 10) + '0');
	putchar ((num % 10) + '0');
		if (num != 99)
		{putchar(',');
		putchar(' ');
		}
	}
putchar('\n');
return (0);
}
