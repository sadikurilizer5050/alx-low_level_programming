#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
* main - print the last digit of the
* number stored in the variable n
*
* Return: 0
*/
int main(void)

{
int digit;
		int n;


			srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes ther*/
digit = n % 10;
printf("Last digit of %d", n);
printf(" is %d", digit);
if (n > 5)
{printf(" and is greater than 5\n");
}
else if (digit != 0 && digit < 6)
{printf(" and is less than 6 and not 0\n");
}
else if (digit == 0)
{printf(" and is 0");
}
return (0);
}
