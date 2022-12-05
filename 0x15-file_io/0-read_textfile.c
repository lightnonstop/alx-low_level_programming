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
	ssize_t fd, num, count;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);

	num = read(fd, buff, letters);
	if (num == -1)
		return (0);
	count = write(1, buff, num);
	if (count == -1)
		return (0);
	return (count);
}
