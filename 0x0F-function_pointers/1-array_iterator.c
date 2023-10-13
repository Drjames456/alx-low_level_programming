#include <stdio.h>
#include "function_pointers.h"



/**
 * array_iterator -  a function that executes a function given as a parameter
 * @array: a ptr to the array
 * @size: size of an array
 * @action: action
 * Return: 0
 */



void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
