#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: File name
  * @text_content: Content to be written into file
  * Return: 1 if successful, -1 if filename is NULL, if file cannot be created
  * written
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[i])
		i++;
		write(fd, text_content, i);
	}
	close(fd);
	return (1);
}
