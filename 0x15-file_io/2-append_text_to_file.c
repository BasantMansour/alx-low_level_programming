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
 * append_text_to_file - this is full text to a file
 * @filename: this the file to create
 * @text_content: this is the text to write
 *
 * Return: 1, or 0
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int df;
	ssize_t byte = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	df = open(filename, O_WRONLY | O_APPEND);
	if (df == -1)
		return (-1);
	if (len)
		byte = write(df, text_content, len);
	close(df);
	return (byte == len ? 1 : -1);
}
