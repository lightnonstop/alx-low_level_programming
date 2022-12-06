#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#define BUFF_SIZE 2048
/**
  * create_and_copy - Copies the content of a file to another file
  * @oldfile: File to be copied from
  * @newfile: File to be copied to
  */
void create_and_copy(char *oldfile, char *newfile)
{
	int of, nf, rd, wr, clo, cln;
	char buff[BUFF_SIZE];

	of = open(oldfile, O_RDONLY);
	if (oldfile == NULL)
	{
		dprintf(of, "Error: Can't read from file %s\n", oldfile);
		exit(98);
	}
	nf = open(newfile, O_RDWR | O_CREAT | O_TRUNC, 0664);
	rd = read(of, buff, BUFF_SIZE);
	clo = close(of);
	if (clo == -1)
	{
		printf("Error: Can't close fd %d\n", of);
		exit(100);
	}
	wr = write(nf, buff, rd);
	if (wr == -1)
	{
		printf("Error: Can't write to file %s\n", oldfile);
		exit(99);
	}
	cln = close(nf);
	if (cln == -1)
	{
		printf("Error: Can't close fd %d\n", nf);
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
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	create_and_copy(argv[1], argv[2]);
	return (0);
}
