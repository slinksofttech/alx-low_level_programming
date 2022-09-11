#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if number is postive, zero or negative
 *
 *  Description: using main function
 *  this program is to print postive, zero or nevagtive numbers
 *  **/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%1 is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%1 is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%1 is negative\n", n)
	}
	return (0);
}
