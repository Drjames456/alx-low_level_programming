#include "main.h"


/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s : get parameter 1
 * @accept : get parameter 2
 * Return: characters counted
 */

unsigned int _strspn(char *s, char *accept)
{
	int k;
	int i;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; s[i] != accept[k]; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
