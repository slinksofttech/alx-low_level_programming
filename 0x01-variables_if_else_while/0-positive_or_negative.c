#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is postive, zero or negative
 *
 *  Description: using main function
 *  this program is to print postive, zero or nevagtive numbers
 *
 *  Return: Always 0.
**/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
