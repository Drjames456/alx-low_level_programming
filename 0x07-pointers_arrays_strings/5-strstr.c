#include "main.h"


/**
 * _strstr - the function that locates a substring.
 * @haystack : get parameter 1
 * @needle: get parameter 2
 * Return: Always 0
 */


char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
