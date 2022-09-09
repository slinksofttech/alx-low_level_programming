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
	long int li;
	long long int lli;
	float f;

	printf("Size of char: %d 1 byte(s)\n", sizeof(c));
	printf("Size of int: %d 4 byte(s)\n", sizeof(i));
	printf("Size of long int: %d 4 byte(s)\n", sizeof(li));
	printf("Size of long long int: %d 8 byte(s)\n", sizeof(lli));
	printf("Size of float: %d 4 byte(s)\n", sizeof(f));
	return (0);
}
