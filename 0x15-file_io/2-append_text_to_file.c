#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - a function that appends text at the end of a file,
 * @filename: the name of the file,
 * @text_content: the text (ptr)
 * Return: 1 on success and -1 on failure Do not create the file
 *	if it does not exist If filename is NULL return -1,
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd_o;

	if (filename == NULL)
		return (-1);
	fd_o = open(filename, O_WRONLY | O_APPEND);
	if (fd_o == -1)
		return (-1);
	if (fd_o == -1)
		return (-1);
	if (text_content != NULL)
		write(fd_o, text_content, strlen(text_content));
	close(fd_o);
	return (1);
}
