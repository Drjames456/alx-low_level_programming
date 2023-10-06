#include <stdio.h>
#include <stdlib.h>



/**
 * _strdup -  a pointer to a newly allocated space in memory.
 * @str: char
 * Return:0
 */


char *_strdup(char *str)
{
	unsigned int i;
	char *arr = *malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
