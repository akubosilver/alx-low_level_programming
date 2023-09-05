#include "main.h"

/**
 * append_text_to_file - a function that appends
 * text at the end of a file
 * @filename: name of file to be opened for appending
 * @text_content: text to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, len;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file < 0)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		wr = write(file, text_content, len);
		if (wr < 0)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
