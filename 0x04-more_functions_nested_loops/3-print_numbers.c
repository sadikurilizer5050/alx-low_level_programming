#include "main.h"

/**
* print_numbers - print 0 – 9
* only use _putchar twice
*
* Return: Always 0 (Success)
*/
void print_numbers(void)
{ int num;
	for (num = 0; num <= 9; num++)
	{ _putchar(num + 48);
	}
_putchar('\n');
}
