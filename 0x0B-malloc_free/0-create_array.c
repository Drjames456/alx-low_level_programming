#include "main.h"
#include <stdlib.h>


/**
 * create_array - a function that create an arrays of chars
 * @size: size of char
 * @c: first string
 * Description: create an array and assign char
 * Return: Null if fail
 */


char *create_array(unsigned int size, char c)
{

	char *charArray;
	unsigned int i;


	charArray = malloc(size * sizeof(char));
	if (charArray == NULL || charArray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		charArray[i] = c;
	}
	return (charArray);
}
