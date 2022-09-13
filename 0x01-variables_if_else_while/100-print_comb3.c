#include <stdio.h>
/**
* main - a program that prints all possible
* different combinations of two digits.
*
* Return: 0.
*/

int main(void)
{int d;
int p;
for (d = 0; d <= 9; d++)
{
	for (p = 0; p <= 9; p++)
	{
		if (d < p)
		{putchar(d + '0');
		putchar(p + '0');
			if (d != 8 || (d == 8 && p != 9))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
