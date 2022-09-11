#include <stdio.h>
/**
*main - to print alphabet in lowercase
*
*Return: (0).
*/
int main(void)
{
char ch = 'a';
/* print lowercase letters */

for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
