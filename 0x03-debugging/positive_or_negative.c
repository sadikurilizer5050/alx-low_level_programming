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
/**		srand(time(0));

				i = rand() - RAND_MAX / 2;
*/
					/* your code goes there */
if (i > 0)
{printf("%d", i);
printf(" is positive\n");
}
else if (i < 0)
{printf("%d", i);
printf(" is negative\n");
}
else
{printf("%d", i);
printf(" is zero\n");
}
return;
}
