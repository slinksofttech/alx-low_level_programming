#include <stdio.h>

/**
 * main - print the string in the function
 *
 * Description: using the main function
 * this program is to prints the size of various types
 * Return: 0
 * **/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	// sizeof evaluates the size of a variable
	printf("Size of char: %d byte(s)\n", sizeof(c));
	printf("Size of int: %d byte(s)\n", sizeof(i));
	printf("Size of long int: %d byte(s)\n", sizeof(li));
	printf("Size of long long int: %d byte(s)\n", sizeof(lli));
	printf("Size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
