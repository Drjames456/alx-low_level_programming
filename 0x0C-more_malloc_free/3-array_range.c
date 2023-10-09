#include <stdio.h>
#include <stdlib.h>


/**
 * array_range - a function that creates an array of integers.
 * @min: minimum element
 * @max: max element
 * Return: pointer
 */


int *array_range(int min, int max)
{
	int i = 0;

	int james = max - min + 1;
	int *arr = (int *)malloc(james * sizeof(int));

	if (min > max)
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < james; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
