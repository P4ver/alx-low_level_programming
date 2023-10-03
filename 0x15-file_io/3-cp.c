#include "main.h"
/**
 * main - the entry point,
 * @cc: the numb of arg,
 * @cv: arr of ptr to arg,
 * Return: always'0'
 */
int main(int cc, char **cv)
{
	int f_frm, f_to, n_read;
	char thebu[BUFFER_SIZE];

	if (cc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", cv[0]), exit(97);
	f_frm = open(cv[1], O_RDONLY);
	if (f_frm == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", cv[1]);
		exit(98);
	}
	f_to = open(cv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (f_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", cv[2]);
		exit(99);
	}
	while ((n_read = read(f_frm, thebu, BUFFER_SIZE)) > 0)
	{
		if (write(f_to, thebu, n_read) == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", cv[2]);
			exit(99);
		}
	}
	if (close(f_frm) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_frm);
		exit(100);
	}
	if (close(f_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f_to);
		exit(100);
	}
	return (0);
}
