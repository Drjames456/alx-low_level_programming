#include <stdio.h>
#include <stdlib.h>
#include <string.h>





/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 * Return: return a pointer
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1 = strlen(s1);
	size_t len2 = strlen(s2);


	char *result = (char *)malloc((len1 + n + 1) * sizeof(char));


	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n >= len2)
	{
		n = len2;
	}
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	return (result);
}
