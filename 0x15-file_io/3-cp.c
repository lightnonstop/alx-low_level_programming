#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define BUFF_SIZE 1024
/**
  * exit_mess - Handles exit code and exit messages
  * @str: Exit message
  * @file: File descriptor
  * @exit_code: Exit value
  */
void exit_mess(char *str, char *file, int exit_code)
{
	dprintf(STDERR_FILENO, str, file);
	exit(exit_code);
}

/**
  * _copy - Copies the content of a file to another file
  * @file_from: File to be copied from
  * @file_to: File to be copied to
  */
void _copy(char *file_from, char *file_to)
{
	int fd1, fd2, rd, wr;
	char buff[BUFF_SIZE];

	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
		exit_mess("Error: Can't read from file %s\n", file_from, 98);

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
		exit_mess("Error: Can't write to %s\n", file_to, 99);

	rd = BUFF_SIZE;
	while (rd == BUFF_SIZE)
	{
		rd = read(fd1, buff, BUFF_SIZE);
		if (rd == -1)
			exit_mess("Error: Can't read from file %s\n", file_from, 98);

		wr = write(fd2, buff, rd);

		if (wr == -1)
			exit_mess("Error: Can't write to %s\n", file_to, 99);
	}
	if (rd == -1)
		exit_mess("Error: Can't read from file %s\n", file_from, 98);

	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
}
/**
  * main - Starting point
  * @argc: Number of arguments
  * @argv: Array argument pointer
  * Description: Handles checking of command line arguments
  * Return: 0 Always
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	_copy(argv[1], argv[2]);

	return (0);
}
