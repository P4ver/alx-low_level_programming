#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
int create_file(const char *filename, char *text_content)
{
	int  f_o;

	if (filename == NULL)
		return (-1);
	f_o = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f_o == -1)
		return (-1);
	if (text_content != NULL)
		write(f_o, text_content, strlen(text_content));
	close(f_o);
	return (1);
}
