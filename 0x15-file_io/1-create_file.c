#include "main.h"
#include <stdio.h>

/**
 * _strlen - this do the length of a string
 * @m: this string that length do to check
 *
 * Return: length of string
*/

int _strlen(char *m)
{
	int y = 0;

	if (!m)
		return (0);

	while (*m++)
		y++;
	return (y);
}

/**
 * create_file - this made to create file
 * @filename: this name of the file
 * @text_content: this is the text to write
 *
 * Return: 1, or 0
*/

int create_file(const char *filename, char *text_content)
{
	int df;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	df = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (df == -1)
		return (-1);
	if (len)
		byte = write(df, text_content, len);
	close(df);
	return (byte == len ? 1 : -1);
}
