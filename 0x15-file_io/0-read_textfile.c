#include "main.h"
#include <stddef.h>




/**
 * read_textfile - a function that reads a text file and prints it to the POSIX
 * @filename:the filename to read
 * @letters: the numbers bytes to read
 * Return: the number of bytes 
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int ab;
	ssize_t bytes;
	char buf[READ_BUF_SIZE * 8];




	if (!filename || !letters)
		return (0);
	ab = open(filename, O_RDONLY);
	if (ab == -1)
		return (0);
	bytes = read(ab, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(ab);
	return (bytes);
}
