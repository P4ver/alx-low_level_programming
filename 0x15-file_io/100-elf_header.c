#include "main.h"
/**
 * main - the entry point
 * @argc: intgere nbr argument,
 * @argv: the pointer arr,
 * Return: always 0,
 */
int main(int argc, char *argv[])
{
	int f_d = open(argv[1], O_RDONLY);
	Elf64_Ehdr elf_h_dr;
	ssize_t bytes_read;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	if (f_d == -1)
	{
		dprintf(2, "Error: Could not open file %s\n", argv[1]);
		exit(98);
	}

	bytes_read = read(f_d, &elf_h_dr, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr) ||
			elf_h_dr.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_h_dr.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_h_dr.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_h_dr.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: Not an ELF file: %s\n", argv[1]);
		close(f_d);
		exit(98);
	}
	print_elf_header_info(&elf_h_dr);
	close(f_d);
	return (0);
}
