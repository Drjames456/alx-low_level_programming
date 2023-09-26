#include "main.h"
#include <string.h>


/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 *  @s: get parameter 1
 *  @accept : get parameter 2
 *  Return: true
 */


char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}

