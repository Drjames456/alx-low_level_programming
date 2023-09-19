#include <stdio.h>


/**
 * strlen - Return the length of string
 * @s: The string to get length
 * Return: The length of str
 */


int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length++);
}
