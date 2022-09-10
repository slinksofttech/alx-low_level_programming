#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is complied
 * and run on
 * Return: Always 0 (Success)
 **/
int main(void)
{

	printf("Size of a char: %d byte(s)\n", (int) sizeof(c));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (int) sizeof(li));
	printf("Size of a long long int: %d byte(s)\n", (int) sizeof(lli));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(f));
	return (0);
}
