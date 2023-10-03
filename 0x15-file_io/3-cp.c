#include "main.h"
#define F_PERR (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the entry point,
 * @cc: the numb of arg,
 * @cv: arr of ptr to arg,
 * Return: always'0'
 */
int main(int cc, char **cv)
{
	int f_frm = 0, f_to = 0;
	ssize_t n_read;
	char thebu[BUFFER_SIZE];

	if (cc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", cv[0]), exit(97);
	f_frm = open(cv[1], O_RDONLY);
	if (f_frm == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cv[1]), exit(98);
	f_to = open(cv[2], O_WRONLY | O_CREAT | O_TRUNC, F_PERR);
	if (f_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cv[2]), exit(99);
	while ((n_read = read(f_frm, thebu, BUFFER_SIZE)) > 0)
	{
		if (write(f_to, thebu, n_read) != n_read)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cv[2]), exit(99);
	}
	if (n_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cv[1]), exit(98);
	f_frm = close(f_frm);
	f_to = close(f_to);
	if (f_frm)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_frm), exit(100);
	if (f_to)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_frm), exit(100);
	return (EXIT_SUCCESS);
}
