#include "main.h"
#include <stddef.h>

/**
 * _strchr - a function that that locates a character in a string.
 * @s: parameter 1
 * @c: parameter 2
 * Return: c
 */


char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
