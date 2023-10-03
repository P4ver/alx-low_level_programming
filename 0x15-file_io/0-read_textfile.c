#include "main.h"
/**
 * read_textfile -  function that reads a text file and
 *	prints it to the POSIX standard output,
 * @filename: the name of the file (ptr)
 * @letters: the num of lttrs,
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, filename is NULL, return 0,
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_dd;
	char *thebu;
	ssize_t nrd, nwrtn;

	if (filename == NULL)
		return (0);
	f_dd = open(filename, O_RDONLY);
	if (f_dd == -1)
		return (0);
	thebu = malloc(letters);
	if (thebu == NULL)
	{
		close(f_dd);
		return (0);
	}
	nrd = read(f_dd, thebu, letters);
	if (nrd == -1)
	{
		free(thebu);
		close(f_dd);
		return (0);
	}
	nwrtn = write(STDOUT_FILENO, thebu, nrd);
	free(thebu);
	close(f_dd);
	if (nrd != nwrtn)
		return (0);
	return (nwrtn);
}
