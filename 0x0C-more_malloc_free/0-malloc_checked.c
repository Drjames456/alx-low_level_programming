#include <stdio.h>
#include <stdlib.h>


/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input integer
 * Return: A pointer
 */


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);



	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
