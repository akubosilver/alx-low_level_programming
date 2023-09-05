#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: size of file
 *
 * Return: size of bytes written or -1 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buff = malloc((letters + 1) * sizeof(char));
	if (buff == NULL)
		return (0);
	rd = read(file, buff, letters);
	if (rd == -1)
		return (0);
	buff[letters] = '\0';
	wr = write(STDOUT_FILENO, buff, rd);
	if (wr == -1)
		return (0);
	close(file);
	free(buff);
	return (wr);
}