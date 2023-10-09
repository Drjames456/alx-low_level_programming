#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 i* _calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: number of element in an a array
 * @size: size of an array
 * Return: NULL
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t totalSize = (size_t)nmemb * size;
	void *arr = malloc(totalSize);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, totalSize);
	return (arr);
}
