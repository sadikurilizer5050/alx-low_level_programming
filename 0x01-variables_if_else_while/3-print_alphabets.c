#include <stdio.h>
/**
* main - a program that prints the alphabet in
* lowercase, and then in uppercase,
* followed by a new line.
*
* Return: 0.
*/

int main(void)
{
char ch = 'a';
/* print lowercase letters */
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
/* print uppercase letters */
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
