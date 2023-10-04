#include "main.h"
void print_elf_header_info(const Elf64_Ehdr *h_dr)
{
	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n", h_dr->e_ident[EI_MAG0], h_dr->e_ident[EI_MAG1], h_dr->e_ident[EI_MAG2], h_dr->e_ident[EI_MAG3]);
	printf("  Class:                             %s\n", h_dr->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("  Data:                              %s\n", h_dr->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", h_dr->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n", h_dr->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("  ABI Version:                       %d\n", h_dr->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n", h_dr->e_type);
	printf("  Entry point address:               %#lx\n", h_dr->e_entry);
}

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
