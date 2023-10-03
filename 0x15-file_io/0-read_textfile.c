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
	FILE *fl_ot;
	char *thebu;
	size_t nrd, nwrtn;

	if (filename == NULL)
		return (0);
	fl_ot = fopen(filename, "r");
	if (fl_ot == NULL)
		return (0);
	thebu = malloc(letters + 1);
	if (thebu == NULL)
	{
		fclose(fl_ot);
		return (0);
	}
	nrd = fread(thebu, 1, letters, fl_ot);
	thebu[nrd] = '\0';
	nwrtn = fwrite(thebu, 1, nrd, stdout);
	free(thebu);
	fclose(fl_ot);
	if (nrd != nwrtn)
		return (0);
	return (nrd);
}
