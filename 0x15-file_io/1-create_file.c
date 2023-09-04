#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: the pointer to filename
 * @text_content: text to write in file
 *
 * Return: 1 on success, -1 on failure (file can not be
 * created, file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file, i, wr;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	wr = write(file, text_content, i);
	if (wr == -1)
		return (-1);
	close(file);
	return (1);
}
