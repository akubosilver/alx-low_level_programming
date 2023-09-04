#include "main.h"

/**
 * main - point of function entry
 * @argv: argument vectors
 * @argc: argument count
 *
 * Return: Zero(0) or (-1)
 */

int main(int argc, char *argv[])
{
	int f1, f2, rd, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(f1, buff, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(f2, buff, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if (close(f1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
		exit(100);
	}

	return (0);
}
