#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
* main - Prints a ransom number and states whether
* it is positive, negative, or zero
*
* Return: 0
*/
void positive_or_negative(int i)
{
int n;
		srand(time(0));

				n = rand() - RAND_MAX / 2;

					/* your code goes there */
if (n > 0)
{printf("%d", n);
printf(" is positive\n");
}
else if (i < 0)
{printf("%d", n);
printf(" is negative\n");
}
else
{printf("%d", n);
printf(" is zero\n");
}
return;
}
