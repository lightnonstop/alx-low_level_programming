#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * create_file - Creates a file
  * @filename: File name
  * @text_content: Content to be written into file
  * Return: 1 if successful, -1 if filename is NULL, if file cannot be created
  * written
  */
int create_file(const char *filename, char *text_content)
{
	int fd, count, i, wr;

	if (filename == NULL)
		return (-1);
	count = 0;
	i = 0;
	while (text_content[i] && text_content[i] != '\0')
	{
		count++;
		i++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, count);
	if (wr == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
