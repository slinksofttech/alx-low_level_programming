#include "main.h"

/**
*_strlen - returns the length of a string
* @s: string
*Return: return length as integers;
*/

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\n')
		len++;
	return (len);
}
