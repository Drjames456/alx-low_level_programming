#include "main.h"


/**
 * _strlen - the length of string
 * @s: the string length to check
 * Return: integer length of string
 */


int _strlen(char *s)
{
	int i = 0;


	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}


/**
 * append_text_to_file -  a function that creates a file.
 * @filename:the name of the file to create
 * @text_content:a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */



int append_text_to_file(const char *filename, char *text_content)
{
	int ab;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
	{
		return (-1);
	}
	ab = open(filename, O_WRONLY | O_APPEND);
	if (ab == -1)
	{
		return (-1);
	}
	if (len)
	{
		bytes = write(ab, text_content, len);
	}
	close(ab);
	return (bytes == len ? 1 : -1);
}
