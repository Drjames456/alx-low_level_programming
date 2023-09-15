#include <stdio.h>
#include "main.h"

/**
 * _isupper- check for uppercase
 * @c: the function parameter
 * Return:1 if it return an uppercase
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
