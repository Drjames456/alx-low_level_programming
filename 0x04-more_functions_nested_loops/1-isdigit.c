#include "main.h"



/**
 * _isdigit- this check for digits
 * @c: this is the function parameter
 * Return: return 1 if  it is a digit
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
