#include "main.h"
#include <stdio.h>

/**
 * read_textfile - we use it to read from a file and print it
 * @filename: this is name of file
 * @letters: this is nummber of file to read
 *
 * Return: byte number read print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int df;
	ssize_t byte;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	df = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	byte = read(df, &buf[0], letters);
	byte = write(STDOUT_FILENO, &buf[0], byte);
	close(df);
	return (byte);
}
