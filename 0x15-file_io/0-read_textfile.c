#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * read_textfile - Reads a text file and prints it to the standard output
  *
  * @filename: File path name
  * @letters: Number of letters it to be read and printed
  *
  * Return: Actual number of letters it read and printed, 0 if filename is
  * NULL, 0 if file cannot be opened or read, it fails or does not write
  * the expected amount of bytes.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters + 1));

	if (buff == NULL)
		return (0);

	rd = read(fd, buff, letters);
	if (rd == -1)
	{
		free(buff);
		return (0);
	}

	buff[letters] = '\0';

	wr = write(STDIN_FILENO, buff, rd);
	if (wr == -1)
		return (0);
	close(fd);
	free(buff);
	return (wr);
}
