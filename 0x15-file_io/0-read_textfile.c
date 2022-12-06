#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - Reads a text file and prints it to POSIX stdout
  * @filename: A pointer to a filename
  * @letters: is the number of letters it should read and print
  * Return: the actual number of letters it could read and print
  * or if failed return 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, op;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	rd = read(fd, buffer, letters);
	op = write(STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);
	return (op);
}
