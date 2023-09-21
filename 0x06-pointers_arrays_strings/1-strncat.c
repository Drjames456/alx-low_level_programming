#include "main.h"
#include <string.h>

/**
 * _strncat - A function that joins two strings
 * @dest: first string
 * @src: second string
 * @n: third string
 * Return: dest
 */


char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + 1] = *src;
		src++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
